import os
from pathlib import Path

# Base directory where the type folders are
base_dir = Path("./")

# Store generated type header filenames for species.h
type_headers = []
type_names = []

# Step 1: Generate each <type>.h inside ./<type>/ folder
for subdir in base_dir.iterdir():
    if not subdir.is_dir():
        continue

    type_name = subdir.name
    type_names.append(type_name)
    type_header_filename = f"{type_name}.h"
    type_headers.append(type_header_filename)
    target_file = subdir / type_header_filename

    # Get all .h files except the one we're about to generate
    header_files = [
        file.name for file in subdir.glob("*.h")
        if file.name != type_header_filename
    ]

    # Write that type's umbrella header
    with open(target_file, "w") as f:
        f.write("#pragma once\n\n")
        for header in sorted(header_files):
            f.write(f'#include "{header}"\n')

    print(f"Generated {target_file} with {len(header_files)} includes.")

# Step 2: Generate species.h in the base directory
species_h_path = base_dir / "species.h"

with open(species_h_path, "w") as f:
    f.write("#pragma once\n\n")
    for type_name in sorted(type_names):
        f.write(f'#include "{type_name}/{type_name}.h"\n')

print(f"\nGenerated {species_h_path} including {len(type_headers)} type headers.")

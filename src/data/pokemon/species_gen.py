import os
import re
from pathlib import Path

# Constants
INPUT_FILE = "species_info.h"
OUTPUT_DIR = Path("species")

# Regex to match species definitions
species_regex = re.compile(
    r"\[\s*(SPECIES_\w+)\s*\]\s*=\s*({(?:[^{}]*|{[^{}]*})*})\s*,?",
    re.MULTILINE | re.DOTALL
)

# Regex to extract the first type
type_regex = re.compile(r"\.types\s*=\s*{\s*(TYPE_\w+)", re.MULTILINE)

# Parse the species_info.h
with open(INPUT_FILE, 'r') as f:
    content = f.read()

matches = species_regex.findall(content)

for species_name, block in matches:
    # Get the simplified name, e.g., BULBASAUR
    name = species_name.replace("SPECIES_", "")

    # Extract first type
    type_match = type_regex.search(block)
    if not type_match:
        print(f"Warning: Could not find type for {species_name}")
        continue
    type_name = type_match.group(1)

    # Remove "TYPE_" prefix and make lowercase for folder name
    type_folder = type_name.replace("TYPE_", "").lower()

    # Create output path
    output_subdir = OUTPUT_DIR / type_folder
    output_subdir.mkdir(parents=True, exist_ok=True)
    output_file = output_subdir / f"{name.lower()}.h"

    # Clean block (optional: normalize spacing)
    block_lines = block.strip().strip("{}").splitlines()
    block_lines = ["    " + line.strip() for line in block_lines if line.strip()]
    formatted_block = " \\\n".join(block_lines)

    # Write to file
    with open(output_file, 'w') as out:
        out.write(f"#pragma once\n\n#define SPECIES_INFO_{name} \\\n{{ \\\n{formatted_block} \\\n}}")

print(f"Generated {len(matches)} species headers in '{OUTPUT_DIR}' directory.")

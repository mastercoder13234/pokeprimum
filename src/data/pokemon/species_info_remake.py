import re

INPUT_FILE = "species_info.h"
OUTPUT_FILE = "species_info_macroized.h"

def main():
    with open(INPUT_FILE, "r") as f:
        content = f.read()

    # Find gSpeciesInfo array start
    start_idx = content.find("const struct SpeciesInfo gSpeciesInfo[] =")
    if start_idx == -1:
        print("Could not find gSpeciesInfo array.")
        return

    # Split file into before, array contents, after
    before = content[:start_idx]
    after_start = content.find("};", start_idx)
    if after_start == -1:
        print("Could not find end of gSpeciesInfo array.")
        return
    after = content[after_start+2:]

    # Extract array contents inside braces
    array_block_start = content.find("{", start_idx)
    array_block_end = after_start
    array_block = content[array_block_start+1:array_block_end].strip()

    # Pattern to match each species entry block like:
    # [SPECIES_NAME] = { ... },
    # or
    # [SPECIES_NAME] = SPECIES_INFO_SOMETHING,
    species_entry_pattern = re.compile(
        r"\[\s*(SPECIES_\w+)\s*\]\s*=\s*(\{.*?\}|SPECIES_INFO_\w+)\s*,?",
        re.DOTALL
    )

    # We'll replace every species entry with:
    # [SPECIES_NAME] = SPECIES_INFO_SPECIESNAME,
    # except for SPECIES_NONE which stays [SPECIES_NONE] = {0},

    new_entries = []

    for match in species_entry_pattern.finditer(array_block):
        species_name = match.group(1)
        old_value = match.group(2).strip()

        if species_name == "SPECIES_NONE":
            # Keep original formatting for none
            new_entries.append(f"[{species_name}] = {{0}},")
        else:
            # Build macro name by stripping SPECIES_ prefix and prefixing SPECIES_INFO_
            macro_name = "SPECIES_INFO_" + species_name[len("SPECIES_"):]
            new_entries.append(f"[{species_name}] = {macro_name},")

    # Compose new array
    new_array = "\n\n".join(new_entries)

    # Write back full file
    with open(OUTPUT_FILE, "w") as f:
        f.write(before)
        f.write("const struct SpeciesInfo gSpeciesInfo[] =\n{\n")
        f.write(new_array)
        f.write("\n};\n")
        f.write(after)

    print(f"Done! Macroized species info saved to {OUTPUT_FILE}")

if __name__ == "__main__":
    main()

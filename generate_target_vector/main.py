# Written by Aaron Barge
# Copyright 2022


from PIL import Image


START = """namespace {
    
using namespace atn;
std::vector<std::vector<Color>> init() {
"""

TARGET_START = """    #ifdef {}
    return std::vector<std::vector<Color>> {{
"""

TARGET_END = """};
    #endif

"""

END = """}

} // anonymous namespace
"""


COLOR_CNV = {
    (0, 0, 0): "  BLACK",
    (255, 255, 255): "  WHITE",
    (0, 255, 33): "    ANY",
    (255, 178, 127): "    TAN",
    (255, 0, 0): "    RED",
    (128, 128, 128): "   GREY",
    (127, 0, 0): "DARK_RED",
}

TARGETS = ["CREEPER", "DINOSAUR", "MARIO", "STAR", "SUS", "WALLY", "LIL_SUS"]

def main():
    with open('target.txt', 'w+') as target_file:
        target_file.write(START)
        for target in TARGETS:
            target_file.write(TARGET_START.format(target))
            img = Image.open(f'../targets/{target}.bmp')
            pix = img.load()
            for y in range(img.size[1]):
                if not y == 0:
                    target_file.write(",\n")
                target_file.write("        {")
                for x in range(img.size[0]):
                    if not x == 0:
                        target_file.write(", ")
                    target_file.write(COLOR_CNV[pix[x, y]])
                target_file.write("}")
            target_file.write(TARGET_END)
        target_file.write(END)


if __name__ == "__main__":
    main()

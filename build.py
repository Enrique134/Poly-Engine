import os

PROJECT_PATH = os.getcwd()

BUILD_PATH = rf"{PROJECT_PATH}\bin"
GENERATOR_NAME = "Ninja"

doConfigure = input("Configure [y/n]: ")
print("\n")

if(doConfigure == "y" or doConfigure == "Y"):
    os.system(f"cmake -G {GENERATOR_NAME} -B \"{BUILD_PATH}\"")
    print("\n")

os.system(f"cmake --build \"{BUILD_PATH}\"")
print("\n")

input()
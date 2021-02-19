#pragma once

#include <raylib.h>

int main() {
    Image image = LoadImage("my image.png");
  	bool success = ExportImageAsCode(image, "data_file.h");
    UnloadImage(image);
}

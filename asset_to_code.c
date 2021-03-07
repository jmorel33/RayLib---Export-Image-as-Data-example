/****** This is an example of loading Image Assets and saving them as Data
 ****** Used for my game project
 ****** Once the files are generated, you can then create for example
 ****** A data.h file and do ,#include <...> for each of the generated files, ex.:
 ******
 ****** #include <A8COLORS.h>
 ****** #include <Font_JJ.h>
 ****** #include <Font_VCR.h>
 ****** #include <ball1.h>
 ****** #include <ball2.h>
 ****** #include <ball3.h>
 ****** #include <ATASCII.h>
 ****** #include <ATARI_BIG.h>
 ****** #include <title.h>
 ******/

#pragma once

#include <raylib.h>

int main() {
	int ok = false;
	
    ok = dump_data("player_anim-sheet.png", "player.h");
    ok = dump_data("explore.png", "title.h");
    ok = dump_data("A8 font round.png", "ATARI_BIG.h");
    ok = dump_data("A8_256.png", "A8COLORS.h");
    ok = dump_data("ATASCII.png", "ATASCII.h");
    ok = dump_data("VCR.png", "font_VCR.h");
    ok = dump_data("font_JJ_small.png", "font_JJ.h");
    ok = dump_data("ball1.png", "ball1.h");
    ok = dump_data("ball2.png", "ball2.h");
    ok = dump_data("ball3.png", "ball3.h");
}

int dump_data(char *input, char *output) {
    Image image = LoadImage(input);     // Loaded in CPU memory (RAM)
	int success = ExportImageAsCode(image, output);
    UnloadImage(image);   // Once image has been converted to texture and uploaded to VRAM, it can be unloaded from RAM
    return success;
};


#ifndef STEGO_H_FILE

#include <stdio.h>
#define STEGO_H_FILE

//Program killer
void die(char* reason);
//Check that the file is P6 format
int read_ppm_type(FILE *);
//Skips past the comments in the file
void skip_comments(FILE *);
//Get's the width of the image 
int get_width(FILE *);
//Get's the height of the image
int get_height(FILE *);
//Returns 1 if 255, else returns 0
int read_color_depth(FILE *);

#endif
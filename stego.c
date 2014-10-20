#include <stdio.h> 
#include <stdlib.h>

#include "stego.h"

//Program killer
void die(char* reason){
  fprintf(stderr, "ERROR: %s\n", reason);
  exit(1);
}

//Returns 1 if P6, else returns 0
int read_ppm_type(FILE *fp) {
  char temp = fgetc(fp); 
  if(temp == 'P' && fgetc(fp) == '6') {
    fgetc(fp);
    return 1;
  }

  return 0;
}

void skip_comments(FILE *fp) {
  char temp;
  while((temp = fgetc(fp)) == '#') {
    while(fgetc(fp) != '\n') {}
  }

  //Give back the first character of width that we took
  ungetc(temp, fp); 

  return;
}

//Returns the width of the image
int get_width(FILE *fp) {
  int w;
  fscanf(fp, "%d", &w);
  return w;
}

//Returns the height of the image
int get_height(FILE *fp) {
  int h;
  fscanf(fp, "%d", &h);
  return h;
}
//Reads the color depth, returns 1 if 255, else returns 0
int read_color_depth(FILE *fp) {
  int c;
  fscanf(fp, "%d", &c);
  if(c == 255) {
    fgetc(fp);    //Get rid of the trailing whitespace 
    return 1;
  }
  return 0;
}

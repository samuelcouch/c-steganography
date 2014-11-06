Steganography in C
====

Steganography is the practce of hiding one thing (in this case, a message) within another thing (in this case, a PPM file).

## How to run
1. Clone this repository
1. `cd c-steganography`
1. `make`
1. `./writeMsg "[secret message]" test-file.ppm` 
  * Remember to escape special characters with `\`
  * out.ppm will be the modified file
1. `./readMsg out.ppm` 

## Demo
**(Give it a click for full size screencast demo)**
![Awesome demo](https://raw.githubusercontent.com/samuelcouch/c-steganography/master/img/screencast.gif)

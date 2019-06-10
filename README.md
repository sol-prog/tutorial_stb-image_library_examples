Support code and images for [C Programming - Reading and writing images with the stb_image libraries](https://www.youtube.com/watch?v=1OyQoPCp46o)

Text version of the tutorial https://solarianprogrammer.com/2019/06/10/c-programming-reading-writing-images-stb_image-libraries/

*t0.c*, *t1.c* and *t1b.c* can be all compiled with something like:

#Linux:

gcc -std=c17 -Wall -pedantic t0.c -o t0 -lm
clang -std=c17 -Wall -pedantic t0.c -o t0 -lm

#macOS:

clang -std=c17 -Wall -pedantic t0.c -o t0

#Windows:

cl /W3 t0.c /Fe:t0.exe

*t2.c* can be compiled with:

#Linux:
gcc -std=c17 -Wall -pedantic Image.c t2.c -o t2 -lm
clang -std=c17 -Wall -pedantic Image.c t2.c -o t2 -lm

#macOS:

clang -std=c17 -Wall -pedantic Image.c t2.c -o t2

#Windows:

cl /W3 Image.c t2.c /Fe:t2.exe

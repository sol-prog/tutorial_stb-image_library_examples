// Load the first 3 channels from a 4 channels image and save it in PNG and JPG format using stb_image libraries
#include <stdio.h>
#include <stdlib.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image/stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image/stb_image_write.h"

int main(void) {
    int width, height, original_no_channels;
    int desired_no_channels = 5;
    unsigned char *img = stbi_load("Shapes.png", &width, &height, &original_no_channels, desired_no_channels);
    if(img == NULL) {
        printf("Error in loading the image\n");
        exit(1);
    }
    printf("Loaded image with a width of %dpx, a height of %dpx. The original image had %d channels, the loaded image has %d channels.\n", width, height, original_no_channels, desired_no_channels);

    stbi_write_png("1.png", width, height, desired_no_channels, img, width * desired_no_channels);
    stbi_write_jpg("2.jpg", width, height, desired_no_channels, img, 100);

    stbi_image_free(img);
}

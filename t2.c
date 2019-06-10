// Example of using the Image library

#include "Image.h"
#include "utils.h"

int main(void) {
    Image img_sky, img_shapes;

    Image_load(&img_sky, "sky.jpg");
    ON_ERROR_EXIT(img_sky.data == NULL, "Error in loading the image");
    Image_load(&img_shapes, "Shapes.png");
    ON_ERROR_EXIT(img_shapes.data == NULL, "Error in loading the image");

    // Convert the images to gray
    Image img_sky_gray, img_shapes_gray;
    Image_to_gray(&img_sky, &img_sky_gray);
    Image_to_gray(&img_shapes, &img_shapes_gray);

    // Convert the images to sepia
    Image img_sky_sepia, img_shapes_sepia;
    Image_to_sepia(&img_sky, &img_sky_sepia);
    Image_to_sepia(&img_shapes, &img_shapes_sepia);

    // Save images
    Image_save(&img_sky_gray, "sky_gray.jpg");
    Image_save(&img_sky_sepia, "sky_sepia.jpg");
    Image_save(&img_shapes_gray, "Shapes_gray.png");
    Image_save(&img_shapes_sepia, "Shapes_sepia.png");

    // Release memory
    Image_free(&img_sky);
    Image_free(&img_sky_gray);
    Image_free(&img_sky_sepia);

    Image_free(&img_shapes);
    Image_free(&img_shapes_gray);
    Image_free(&img_shapes_sepia);
}

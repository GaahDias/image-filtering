#include "bmp.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width]);

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width]);

//Sepia effect
void sepia(int height, int width, RGBTRIPLE image[height][width]);

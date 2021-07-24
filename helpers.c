#include "helpers.h"
#include <stdbool.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width]) {
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            BYTE gray = (image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3;

            image[i][j].rgbtRed = gray;
            image[i][j].rgbtGreen = gray;
            image[i][j].rgbtBlue = gray;
        }
    }
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width]) {
    BYTE box[8][3];
    bool flag = true;

    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            if(j != 0 && j != width && i != 0 && i != height) {
                box[0][0] = image[i-1][j-1].rgbtRed;
                box[0][1] = image[i-1][j-1].rgbtGreen;
                box[0][2] = image[i-1][j-1].rgbtBlue;

                box[1][0] = image[i-1][j].rgbtRed;
                box[1][1] = image[i-1][j].rgbtGreen;
                box[1][2] = image[i-1][j].rgbtBlue;

                box[2][0] = image[i-1][j+1].rgbtRed;
                box[2][1] = image[i-1][j+1].rgbtGreen;
                box[2][2] = image[i-1][j+1].rgbtBlue;

                box[3][0] = image[i][j+1].rgbtRed;
                box[3][1] = image[i][j+1].rgbtGreen;
                box[3][2] = image[i][j+1].rgbtBlue;

                box[4][0] = image[i+1][j+1].rgbtRed;
                box[4][1] = image[i+1][j+1].rgbtGreen;
                box[4][2] = image[i+1][j+1].rgbtBlue;
                
                box[5][0] = image[i+1][j].rgbtRed;
                box[5][1] = image[i+1][j].rgbtGreen;
                box[5][2] = image[i+1][j].rgbtBlue;
                
                box[6][0] = image[i+1][j-1].rgbtRed;
                box[6][1] = image[i+1][j-1].rgbtGreen;
                box[6][2] = image[i+1][j-1].rgbtBlue;

                box[7][0] = image[i][j-1].rgbtRed;
                box[7][1] = image[i][j-1].rgbtGreen;
                box[7][2] = image[i][j-1].rgbtBlue;

                image[i][j].rgbtRed = (box[0][0] + box[1][0] + box[2][0] + box[3][0] + box[4][0] + box[5][0] + box[6][0] + box[7][0]) / 8;
                image[i][j].rgbtGreen = (box[0][1] + box[1][1] + box[2][1] + box[3][1] + box[4][1] + box[5][1] + box[6][1] + box[7][1]) / 8;
                image[i][j].rgbtBlue = (box[0][2] + box[1][2] + box[2][2] + box[3][2] + box[4][2] + box[5][2] + box[6][2] + box[7][2]) / 8;
            }
        }
    }
}

//Applies sepia effect
void sepia(int height, int width, RGBTRIPLE image[height][width]) {

}

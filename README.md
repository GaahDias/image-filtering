# CS50: Image Filtering

## Project done in Harvard CS50 - Introduction to Computer Science course.

It's a simple C application for modiying the RGB bits in a BMP image and applying some effects like Sepia, Grayscale and Blur.

* Sepia:

<table>
    <tr>
        <td><img width="450px" align="left" src="images/tower.bmp" /></td>
        <td><img width="435px" align="left" src="images/sepia-tower.bmp" /></td>
    </tr>
</table>

* Grayscale:

<table>
    <tr>
        <td><img width="450px" align="left" src="images/yard.bmp" /></td>
        <td><img width="450px" align="left" src="images/gray-yard.bmp" /></td>
    </tr>
</table>

* Blur:

<table>
    <tr>
        <td><img width="450px" align="left" src="images/courtyard.bmp" /></td>
        <td><img width="450px" align="left" src="images/blur-courtyard.bmp" /></td>
    </tr>
</table>

You can test the application using:
> make


> ./filter -s infile.bmp outfile.bmp - *Sepia*

> ./filter -g infile.bmp outfile.bmp - *Gray*

> ./filter -b infile.bmp outfile.bmp - *Blur*

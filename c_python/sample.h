#ifndef SAMPLE_H
#define SAMPLE_H

/* Include the necessary standard libraries */
#include <math.h>

/* Function prototypes */

/* Compute the greatest common divisor */
int gcd(int x, int y);

/* Test if (x0,y0) is in the Mandelbrot set or not */
int in_mandel(double x0, double y0, int n);

/* Divide two numbers and return the quotient and remainder */
int divide(int a, int b, int *remainder);

/* Calculate the average of values in an array */
double avg(double *a, int n);

/* Definition of the Point data structure */
typedef struct Point {
    double x, y;
} Point;

/* Calculate the distance between two points */
double distance(Point *p1, Point *p2);

#endif /* SAMPLE_H */

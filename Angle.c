#include <stdio.h>
#include <math.h>

/**
 * To compute for the parameter in each equation
 * Equation 1: 2.25
 * Equation 1: 2.26
 * Equation 1: 2.27
 * Equation 1: 2.28
 */ 


#define c 299792458 // speed of light in m/s
#define f 2.45e9 // frequency in Hz
#define lambda (c / f) // wavelength in m
#define d (lambda / 2) // parameter d in equation 2.27
#define a (lambda / 2) // parameter a in equation 2.28

int main(void)
{
    int angle_start = 0;
    int angle_end = 360;
    int intervals = 15;
    int i;
    float pi = M_PI;

    for (i = angle_start; i <= angle_end; i += intervals){
        printf("The angle starts at %d degree\n", angle_start);
        printf("The angle ends at %d degrees\n", angle_end);
        printf("The interval angle is %d degrees\n", intervals);

        printf("Angle: %d degrees\n", i);

        //Convert angle from degrees to radians
        const double theta = i * pi / 180.0;

        // Compute parameters for equation 2.25
        const double v = c * sin(theta);
        
        printf("Parameter v for equation 2.25: %.4f m/s\n", v);

        // Compute parameters for equation 2.26
        const double gamma = 1 / sqrt(1 - pow(v/c, 2));
        printf("Parameter gamma for equation 2.26: %.4f\n", gamma);
        
        // Compute parameters for equation 2.27
        const double D = d / sin(theta);
        printf("Parameter D for equation 2.27: %.4f m\n", D);
        
        // Compute parameters for equation 2.28
        const double b = lambda / (2 * sin(theta));
        printf("Parameter b for equation 2.28: %.4f m\n\n", b);
    }
    


}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

//A Program to read, display, add, subtract two complex numbers

int main(){
    struct complex{
        int real;
        int imaginary;
    };
    struct complex c1, c2, c3, c4, c5;
    printf("Enter the real part of the first complex number: ");
    scanf("%d", &c1.real);
    printf("Enter the imaginary part of the first complex number: ");
    scanf("%d", &c1.imaginary);
    printf("Enter the real part of the second complex number: ");
    scanf("%d", &c2.real);
    printf("Enter the imaginary part of the second complex number: ");
    scanf("%d", &c2.imaginary);
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
    printf("The sum of the two complex numbers is: %d + %di\n", c3.real, c3.imaginary);
    c3.real = c1.real - c2.real;
    c3.imaginary = c1.imaginary - c2.imaginary;
    printf("The difference of the two complex numbers is: %d + %di\n", c3.real, c3.imaginary);
    c4.real = (c1.real * c2.real) + (c1.imaginary * c2.imaginary * -1);
    c4.imaginary = (c1.real * c2.imaginary) + (c1.imaginary * c2.real);
    printf("The product of the two complex numbers is: %d + %di\n", c4.real, c4.imaginary);
    c5.real = ((c1.real * c2.real) - (c1.imaginary * c2.imaginary * -1)) / ((c2.real * c2.real) + (c2.imaginary * c2.imaginary));
    c5.imaginary = ((c1.real * c2.imaginary * -1) + (c1.imaginary * c2.real)) / ((c2.real * c2.real) + (c2.imaginary * c2.imaginary));
    printf("The quotient of the two complex numbers is: %d + %di\n", c5.real, c5.imaginary);
    return 0;
}
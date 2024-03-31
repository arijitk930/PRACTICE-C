#include<stdio.h>
typedef struct {
    int real;
    int img;
}complex;
void printComplex(complex x){
    if(x.img>=0)
        printf("%d + %di",x.real,x.img);
    else
        printf("%d - %di",x.real,-x.img);
}
complex add(complex a, complex b) {
    complex sum;
    sum.real=a.real+b.real;
    sum.img=a.img+b.img;
    return sum;
}
complex multiply(complex a,complex b){
    complex  product;
    product.real = (a.real * b.real - a.img * b.img);
    product.img = (a.real * b.img + a.img * b.real);
    return product;
}
complex substraction(complex a,complex b){
    complex sub;
    sub.real=a.real-b.real;
    sub.img=a.img-b.img;
    return sub;
}

int main(){
    complex a,b,sum,mul,sub;
    printf("Enter the real and imaginary  part of first complex number: ");
    scanf("%d %d",&a.real, &a.img);

    printf("Enter the real and imaginary part of the second complex number: ");
    scanf("%d %d",&b.real, &b.img);

    // performing operations on the complex numbers
    sum = add(a, b);
    mul = multiply(a, b);
    sub= substraction(a, b);

    // printing the results
    printf("Complex add: ");
    printComplex(sum);
    printf("\n");

    printf("Complex multiply: ");
    printComplex(mul);
    printf("\n");

    printf("Complex subtract: ");
    printComplex(sub);
    printf("\n");
    return 0;
}
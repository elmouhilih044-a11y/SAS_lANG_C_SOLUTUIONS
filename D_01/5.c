#include<stdio.h>
int main (){
    float x;
    float p;
    printf("entrez la valeur de x");
    scanf("%f",&x);
    p=(3*x*x*x*x*x)+(2*x*x*x*x)-(5*x*x*x)-(x*x)+(7*x)-6;
    printf("la valeur du polynome est : %.2f",p);
    return 0;

}
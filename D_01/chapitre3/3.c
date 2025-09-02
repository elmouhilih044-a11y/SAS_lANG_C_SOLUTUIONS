#include<stdio.h>
int main(){
      float v; 
       float pi=3.14;
       float r;
    printf("entrez la valeur de rayon :");
    scanf("%f",&r);
    v=4.0f/3.0f*pi*r*r*r;
    printf("le volume du sphere est: %.2f",v);
    return 0;
}
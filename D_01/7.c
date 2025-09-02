#include<stdio.h>
int main(){
    float m;
     int b1;
      int b2;
       int b3;
        int b4;
    printf("entrez un montant ");
    scanf("%f",&m);
    b1=m/20;
    m=m-(b1*20);
    b2=m/10;
     m=m-(b2*10);
    b3=m/5;
     m=m-(b3*5);
    b4=m;
    printf("Billets de 20$ :%d \n ",b1);
     printf("Billets de 10$ :%d \n  ",b2);
      printf("Billets de 5$ :%d \n ",b3);
       printf("Billets de 1$ :%d \n ",b4);
       return 0;

}
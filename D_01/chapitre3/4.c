#include<stdio.h>
int main(){
    float m;
    float taxe;
    printf("entrez un montant en dollar ");
    scanf("%f",&m);
    taxe=(m*0.05)+m;
    printf ("le montant avec taxe est :%.2f",taxe);
    return 0;

    
}
#include <stdio.h>
int main() {
float m;
float i,pm,ps;
float sr1,sr2,sr3;
printf(" Entrez le montant du pret :");
scanf("%f",&m);
printf(" Entrez le taux interet:");
scanf("%f",&i);
printf(" Entrez le paiement mensuel:");
scanf("%f",&pm);
ps=i/100/12;
sr1=m+(m*ps)-pm;
sr2=(sr1+(m*ps)-pm);
sr3=(sr2+(m*ps)-pm);
printf("Solde restant apres le premier paiement : %.2f\n",sr1);
printf("Solde restant apres le deuxieme paiement : %.2f\n",sr2);
printf("Solde restant apres le troisieme paiement : %.2f\n",sr3);
return 0;


}

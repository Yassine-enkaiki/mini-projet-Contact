#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char nom[30];
    char num[30];
    char mail[30];
    }contact;
int main()
{
    int choix;
    int n;
    int i;
    int condition=0;
    int trouve=0;
    contact c[30];
    char nm[30];


    do{
        printf("\n\n--------------------------------\n\n");
        printf("------------ MENU --------------\n\n");
        printf("--------------------------------\n\n");
        printf("1- Ajouter un Contact\n\n");
        printf("2- Modifier un Contact\n\n");
        printf("3- Supprimer un Contact\n\n");
        printf("4- Afficher Tous les Contacts\n\n");
        printf("5- Rechercher un Contact\n");
        printf("--------------------------------\n\n");
        printf("Enter votre choix :\n");
        scanf("%d", &choix);
    switch(choix)
            {
case 1:
                printf("Combien des contacts vous souahaitez ajouter : \n");
                scanf("%d", &n);
                  for(i=0;i<n;i++)
                {

                printf("Donner le nom du contact : \n");
                scanf("%s",&c[i].nom);
                printf("Donner le numero du contact: \n");
                scanf("%s", &c[i].num);
                printf("Donner l'email : \n");
                scanf("%s", &c[i].mail);
              }
                break;
case 2:
                printf("Donner le nom du contact pour la modification du numero de telephone et L'adresse e-mail : \n");
                scanf("%s",nm);

                for(i=0; i<n; i++)
                    {
                     if(strcmp(c[i].nom , nm) == 0)
                        {

                printf("Donner a nouveau son numero du contact : \n");
                scanf("%s", &c[i].num);
                printf("Donner a nouveau son email : \n");
                scanf("%s", &c[i].mail);

                trouve=1;
                break;
                        }
                    }
                if(trouve==0){
                printf("Votre contact est introuvable. Essayer a nouveau !! \n");}

                trouve=0;
                break;
case 3:
               printf("Veuillez donner le nom du votre contact pour le supprimer : \n");
                scanf("%s",nm);

                for(i=0; i<n; i++)
                {
                    if(strcmp(c[i].nom , nm) == 0)
                    {

                            for (int j = i; j < n - 1; j++)
                        {
                            strcpy(c[j].nom, c[j + 1].nom);
                            strcpy(c[j].num, c[j + 1].num);
                            strcpy(c[j].mail, c[j + 1].mail);
                        }

                        n--;
                        printf("le contact a ete supprimer avec success !!\n");
                trouve=1;
                break;
                     }
                }

                if (trouve == 0)
                    {
                      printf("Contact n'est pas trouve.\n");
                    }
                trouve =0;
                break;
case 4:
    for(i=0;i<n;i++)
    {
                printf("Le contact numero %d : \n",i+1);
                printf("Le nom : %s ---- Le numero : %s ---- L'email : %s \n",c[i].nom, c[i].num, c[i].mail);
    }
         break;


case 5:
                printf("Veuillez donner le nom du votre contact pour le rechercher : \n");
                scanf("%s",nm);

                for(i=0; i<n; i++)
                    {
                     if(strcmp(c[i].nom , nm) == 0)
                        {

                printf("Le nom : %s ---- Le numero : %s ---- L'email : %s \n",c[i].nom, c[i].num, c[i].mail);
                        }
                    }
                break;

            }
                }while(choix !=0);

                return 0;
}



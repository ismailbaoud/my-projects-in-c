#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char titre[100][100];
    char leteur[100][100];
    float prix [100];
    int quantite[100];

    ok:

   printf("veuillez entrer le nombre de votre choix :\n");

   int menu;

   printf("1=>ajouter \n2=>afficher \n3=>rechercher \n4=>mettre a jour le quantite \5=>nsupremmer \n6=>afficher nombre de livres \n=>");
    scanf("%d", &menu);


    int i;
    int taille;
    int compteur=0;
    char n_titre;
    int n_nombre;


    switch (menu)
    {


        case 1 :

            printf("veuillez entrer le nombre de livre  :");
            scanf("%d",&taille);

            for(i=0;i<taille;i++)
            {

                printf("veuillez entrer le titre : ");
                scanf("%s",titre[i]);

                printf("veuillez entrer le leteur : ");
                scanf("%s",leteur[i]);

                printf("veuillez entrer le prix : ");
                scanf("%f", &prix[i]);

                printf("veuillez entrer le contite : ");
                scanf("%d", &quantite[i]);

                compteur++;
            }


                goto ok;



        case 2:

                for(i=0;i<compteur;i++)
                {

                    printf("le titre de livre est : %s\n", titre[i]);

                    printf("le leteur de livre est : %s\n", leteur[i]);

                    printf("le prix de livre est : %f\n", prix[i]);

                    printf("le contite de livre est : %d\n", quantite[i]);

                    printf("**************************");
                }
                goto ok ;

                char n_titre[100];
                int co;
        case 3:
                printf("veuillez entrer un titre :");
                scanf("%s", n_titre);

                co =0;

                for(i=0;i<compteur;i++)
                {
                        if(strcmp(n_titre,titre[i])== 0)
                    {
                        co = 1;

                        printf("le titre de livre est : %s\n", titre[i]);
                        printf("le leteur de livre est : %s\n", leteur[i]);
                        printf("le prix de livre est : %f\n", prix[i]);
                        printf("le contite de livre est : %d\n", quantite[i]);
                    }
                }

                if(compteur == 0)
                {

                    printf("ne pas exist");

                }

                goto ok;

        case 4:

                printf("veuilles entrer le titre de livre : ");
                scanf("%s", n_titre);
                printf("veuilles entrer le cauntite: ");
                scanf("%d", &n_nombre);
                for(i=0;i<compteur;i++)
                {
                    if(strcmp(n_titre,titre[i])== 0)
                    {

                        quantite[i] = n_nombre ;

                    }

                }

                goto ok;
                char s_nombre[100];

        case 5 :


                printf("veuillez entrer le titre :");
                scanf("%s", n_titre);

                printf("veuilles entrer le nombre supremer: ");
                scanf("%d", &s_nombre);


                for(i=0;i<compteur;i++)
                {
                    if(strcmp(n_titre,titre[i])==0)
                        {
                            strcpy(titre[i],titre[i+1]);
                            strcpy(leteur[i],leteur[i+1]);
                            prix[i]=prix[i+1];
                            quantite[i]=quantite[i+1];
                            compteur--;
                        }
                }


    case 7 :

            break;
    }








    return 0;
}

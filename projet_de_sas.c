#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    int annee;
    int jour;
    int mois;
}date;

typedef struct {
    char nom[100];
    char prenom[100];
    char departement[100];
    float note_general;
    date date_de_naissance;
}Etudiant;

Etudiant les_etudiant[100];
int compteur=0;
int nombre_uniqeu[100];


//fonction de ajoute : numero unique , nom , prenom , date de naissance , departement , note general :
void ajouter()
{
    int taille ;
    int nombre_detudiant; 
    int test = 0;
    printf("menu : \n");
    printf("1 => ajouter un etudiant \n2 => ajouter plusieur \n3 => reteur\n");
    printf("veuillez entrer votre choix");
    scanf("%d", &nombre_detudiant);
    switch(nombre_detudiant)
    {
        case 1 :  taille = 1;
            break;
    
    
        case 2 :  printf("veuillez entrer combien des etudiants: ");
                scanf("%d", &taille);
            break;
        case 3 : test = 1;
        break;
        default : printf("non choix ...");
        break;
    }
    if(test == 0)
    {
        for(int i = compteur ; i<compteur+taille; i++)
        {
            int choix;
            printf("veuillez entrer le nom: ");
            scanf("%s", les_etudiant[i].nom);
            printf("veuillez entrer le prenom: ");
            scanf("%s", les_etudiant[i].prenom);
            printf("veuillez entrer la note general: ");
            scanf("%f", &les_etudiant[i].note_general);
            printf("veuillez entrer la date de nessons(YYYY/MM/DD): \n");
            
            do
            {
                printf("=> l'anne de naissance(YYYY) : ");
                scanf("%d", &les_etudiant[i].date_de_naissance.annee);
            }while(les_etudiant[i].date_de_naissance.annee>2020 || les_etudiant[i].date_de_naissance.annee<1900);
            
            do
            {
                printf("=> le mois de naissance (MM): ");
                scanf("%d", &les_etudiant[i].date_de_naissance.mois);
            }while(les_etudiant[i].date_de_naissance.mois>12 || les_etudiant[i].date_de_naissance.mois<1);
            
            do
            {
                printf("=> le jour de naissance (JJ): ");
                scanf("%d", &les_etudiant[i].date_de_naissance.jour);
            }while(les_etudiant[i].date_de_naissance.jour>31 || les_etudiant[i].date_de_naissance.jour<1);
            
            printf("veuillez entrer votre departempent : \n");
            printf("1=> svt \n2=> chariaa \n3=> fst: ");
            scanf("%d", &choix);
            switch(choix)
            {
                case 1 : strcpy(les_etudiant[i].departement,"svt");
                break;
                case 2 : strcpy(les_etudiant[i].departement,"chariaa");
                break;
                case 3 : strcpy(les_etudiant[i].departement,"fst");
                break;
                default : printf("ne pas trouve");
                break;
            }
            nombre_uniqeu[i]=i+1;
        
        }
    }
    compteur+=taille;
}
//fonction

//fonction afichage :

void afficher()
{
    if(compteur != 0)
    {
        for(int i=0;i<compteur;i++)
        {
            printf("le nom : %s |le prenom : %s | la note general : %.2f |\n",les_etudiant[i].nom,les_etudiant[i].prenom,les_etudiant[i].note_general);
            printf("la date de naissance :annee : %d /mois : %d /jour : %d|le nombre d'etudiant : %d|\n", les_etudiant[i].date_de_naissance.annee,les_etudiant[i].date_de_naissance.mois,les_etudiant[i].date_de_naissance.jour,nombre_uniqeu[i]);
            printf("le deoartement : %s |\n", les_etudiant[i].departement);
            
        }
    }
    else
    {
        printf("non etudient ....\n");
        
    }

}

//fonction modifier : 
void modifier()
{
    int choix; 
    int id;
    printf("veuillez entrer qeu vous modifier : ");
    printf("1 => le nom \n2 => le prenom \n3 => la note general\n4 =>date de naissance \n5 => departement\n");
    printf("veuillez entrer votre chiox : ");
    scanf("%d", &choix);
    printf("entrer le id : ");
    scanf("%d", &id);
    for(int i = 0; i<compteur;i++)
    {
        if(id == nombre_uniqeu[i])
        {
        switch(choix)
        {  
            case 1 : printf("veuillez entrer le nouvelle nom : ");
                scanf("%s", les_etudiant[i].nom );
            break;
            case 2 : printf("veuillez entrer le nouvelle prenom : ");
                scanf("%s", les_etudiant[i].prenom );
            break;
            case 3 : printf("veuillez entrer le nouvelle note general : ");
                scanf("%s", les_etudiant[i].note_general );
            break;
            case 4 : printf("entrer votre choix : \n");
                printf("1 => modifier anne\n2 => modifier mois\n3 => modifier jour");
                scanf("%d", &choix);
                switch(choix)
                {
                    case 1 : printf("veuillez entrer la nouvelle annee : ");
                            scanf("%d", &les_etudiant[i].date_de_naissance.annee);
                    break;
                    case 2 : printf("veuillez entrer la nouvelle mois : ");
                            scanf("%d", &les_etudiant[i].date_de_naissance.mois);
                    break;
                    case 3 : printf("veuillez entrer la nouvelle jour : ");
                            scanf("%d", &les_etudiant[i].date_de_naissance.jour);
                    break;
                    default : printf("no trouve pas...");
                    break;
                }
                
            break;
            case 5 :
            printf("veuillez entrer le nouvelle choix : \n");
            printf("1=> svt \n2=> chariaa \n3=> fst: ");
            scanf("%d", &choix);
            switch(choix)
            {

                case 1 : strcpy(les_etudiant[i].departement,"svt");
                break;
                case 2 : strcpy(les_etudiant[i].departement,"chariaa");
                break;
                case 3 : strcpy(les_etudiant[i].departement,"fst");
                break;
                default : printf("ne pas trouve");
                break;
            }
            break;

            default : printf("non choix ...");
            break;
        }
    }
}
}
//fonction departement:
float fst = 0;
float svt = 0;
float chariaa = 0;
float general = 0;
int compteur_1 = 0;
int compteur_2 = 0;
int compteur_3 = 0;
void depar()
{
    
    float sum_1 = 0;
    float sum_2 = 0;
    float sum_3 = 0;
    float sum_general = 0;
    for(int i = 0; i<compteur;i++)
    {
        if(strcmp("fst",les_etudiant[i].departement)==0)
        {
            sum_1 = sum_1+les_etudiant[i].note_general;
            compteur_1++;
            
        }
        else if(strcmp("svt",les_etudiant[i].departement)==0)
        {
            sum_2 = sum_2+les_etudiant[i].note_general;
            compteur_2++;
            
        }
        else if(strcmp("chariaa",les_etudiant[i].departement)==0)
        {
            sum_3 = sum_3+les_etudiant[i].note_general;
            compteur_3++;
            
        }
    
      sum_general=sum_general+les_etudiant[i].note_general;

    }

    fst = sum_1/compteur_1;
    svt = sum_2/compteur_2;
    chariaa = sum_3/compteur_3;
    general = sum_general/compteur;
}
//fonction supremer :

void recherche()
{
    char choix[100];
    printf("veuillez entrer le nom : ");
    scanf("%s", choix);

    for(int i = 0;i<compteur;i++)
    {
        if(strcmp(choix,les_etudiant[i].nom)==0)
        {
            printf("le nom : %s |le prenom : %s | la note general : %.2f |\n",les_etudiant[i].nom,les_etudiant[i].prenom,les_etudiant[i].note_general);
            printf("la date de naissance : %d / %d / %d|le nombre d'etudiant : %d|\n", les_etudiant[i].date_de_naissance.annee,les_etudiant[i].date_de_naissance.mois,les_etudiant[i].date_de_naissance.jour,nombre_uniqeu[i]);
            printf("le deoartement : %s |\n", les_etudiant[i].departement);

        }
    }
}

int main ()
{
    do{
    ajouter();
    afficher();
    depar();
    printf("%d", compteur_1);
    


    
    //modifier();
    //afficher();
    //recherche();
    }while(1);
}

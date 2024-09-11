#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int jour;
int moin;
int anne;

void menu_prancip()
{
    do{
        printf("veuillez entrer un jour : ");
        scanf("%d", &jour);
        if(isalpha(jour)){
            printf("nin");
        }
    }while(jour<0||jour>31);

    do{
    printf("veuillez entrer un moin : ");
    scanf("%d", &moin);
    }while(moin<0||moin>12);
    
    do{
    printf("veuillez entrer un anne : ");
    scanf("%d", &anne);
    }while(anne<0||anne>9999);
    
}
int main()
{
    menu_prancip();
    if((moin==1||moin==4||moin==6 || moin == 9|| moin ==11)==30)
    {
        moin++;
        jour=0;
    }
    else if((moin==1||moin==4||moin==6 || moin == 9|| moin ==11)==31)
    {
        do{
            printf("veuillez etrer un jour entre 1 et 30");
        }while(jour==31);
    }


    else if((moin==3||moin==5||moin==7 || moin == 8|| moin ==10)==31)
    {
        moin++;
        jour=0;
    }
    else if(moin==2)
    {
        if(anne%4==0 && anne%100!=0 || anne%400==0)
        {
            if(jour==29)
            {
                moin++;
                jour=0;
            }
            else if(jour==30||jour==31)
            {
                do
                {
                    printf("veuillez entrer un jour entre 1 et 29");
                    scanf("%d", &jour);
                }while(jour==30||jour==31);
            }

        }
        else
        {
             
            if(jour==30||jour==31||jour==29)
            {
                do
                {
                    printf("veuillez entrer un jour entre 1 et 28");
                    scanf("%d", &jour);
                }while(jour==30||jour==31||jour==29);
                    if(jour==28)
                    {
                        moin++;
                        jour=0;
                    }
            }
            else if(jour==28)
            {
                moin++;
                jour=0;
            }


        
            
        }


    }
    else if(moin==12)
    {
        if(jour==31)
        {
            moin=1;
            anne++;
            jour=0;
        }
       
    }
    jour++;
    printf("la date est: %d / %d / %d ", jour,moin,anne);

    return 0;
}

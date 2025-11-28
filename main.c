#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ID[5], Vize[5], Final[5],i,s,MaxID;
    float Gensumstud[5],Gensumclass,Maxscore,Addition;
    for(i=0;i<5;i++){
    printf("Enter ID, vize and final scores of %d. student:\n",i+1);
    scanf("%d%d%d",&ID[i],&Vize[i],&Final[i]);
    }
    printf("\n\n");
    Addition=0;
    Maxscore=0;
    for(s=0;s<5;s++){
        Gensumstud[s]=Vize[s]*0.40+Final[s]*0.60;
        Addition+=Gensumstud[s];

        if(Gensumstud[s]>Maxscore){
                Maxscore=Gensumstud[s];
                MaxID=ID[s];
        }
        printf("\n\n");
        if(Gensumstud[s]>49){
            printf("ID:%d\t Vize:%d\t Final:%d\t General Score:%.2f\t\t",ID[s],Vize[s],Final[s],Gensumstud[s]);
            printf("PASSED!\n");
        }
        else {
            printf("ID:%d\t Vize:%d\t Final:%d\t General Score:%.2f\t\t",ID[s],Vize[s],Final[s],Gensumstud[s]);
            printf("FAILED!\n");
        }
    }
    Gensumclass=Addition*0.2;
    printf("\n\n");
    printf("===\t\tAnalize of Class\t\t===\n");
    printf("Congratulations! ID:%d The best score:%.2f\t\n",MaxID,Maxscore);
    printf("General score of class:%.2f",Gensumclass);

    return 0;
}

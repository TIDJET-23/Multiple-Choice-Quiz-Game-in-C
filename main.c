#include <stdio.h>
#include <stdlib.h>

int main()
{
  int debut,domain;
  int q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,q11,q12,q13,q14,q15,q16,q17,q18,q19,q20;
  char nom[50];
  int i=0;
  printf("=====================================================================\n");
  printf("\t \t _--_--_       bienvenue       _--_--_\n");
  printf("=====================================================================\n");
  printf("\n");
  printf("\n");
  printf("\t  ______________________________________________\n");
  printf("\t  *************  1/-  commencer  ***************\n");
  printf("\t  *************  2/-  aide       *************** \n");
  printf("\t  ______________________________________________\n");
  printf("\n");
  printf("\n");
  printf("\t  choisir entre 1 ou 2 \n");
  printf("\t  ==============================================\n");
  do{
  printf("\t  >entre votre choix ici  ==> ");
  scanf("%d",&debut);
  }while(debut<1 || debut>2);

  printf("\t  ==============================================\n");
  switch(debut){
              case 1://commencer le jeux
                                printf("\n");
                                printf("\n");
                                printf("\t  ==============================================\n");
                                 printf("\t  >entre votre nom :  ");
                                scanf("%s",&nom);
                                printf("\t  ==============================================\n");
                                printf("\n");
                                printf("\n");
                                printf("\t  voice les domain :\n");
                                printf("\t  ----------------------------------------------\n");
                                printf("\t  \t1/-informatique\n");
                                printf("\t  \t2/-mathematique\n");
                                printf("\t  \t3/-sport\n");
                                printf("\t  \t4/-litterateur \n");
                                printf("\t  \t5/-histoir\n");
                                printf("\t  \t6/-geographie\n");
                                printf("\t  ----------------------------------------------\n");
                                do{
                                printf("\n");
                                printf("\n");
                                printf("\t  ==============================================\n");
                                printf("\t  entre domain ici  ==> ");
                                scanf("%d",&domain);
                                printf("\t  ==============================================\n");
                                printf("\n");
                                printf("\t  c'est parti %s \n",nom);
                                }while(domain<1 || domain>6);
                                printf("---------------------------------------------------------------------\n");
                                switch(domain){
                                            /*111111111111111111111111111111*/
                                            /*informatique*/
                                            case 1:

                                                  /*1*/
                                                  printf("---------------------------------------------------------------------\n");
                                                  printf("\t  1-XML est un langage de programation ?\n",nom);
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\t       1-vrai               2-faux\n");
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\n");
                                                  printf("\n");
                                                  printf("\t  choisir entre 1 ou 2 \n");
                                                  printf("\t  ==============================================\n");
                                                  do{
                                                  printf("\t  >entre votre reponse ici  ==> ");
                                                  scanf("%d",&q1);
                                                  printf("\t  ==============================================\n");
                                                  }while(q1<1 || q1>2);
                                                  if(q1==1){
                                                    i=i;
                                                  }else{
                                                    i++;
                                                  }

                                                  /*2*/
                                                  printf("---------------------------------------------------------------------\n");
                                                  printf("\t  2-la souris est composant de base d'un systeme informatique ?\n",nom);
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\t       1-non               2-oui\n");
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\n");
                                                  printf("\n");
                                                  printf("\t  choisir entre 1 ou 2 \n");
                                                  printf("\t  ==============================================\n");
                                                  do{
                                                  printf("\t  >entre votre reponse ici  ==> ");
                                                  scanf("%d",&q2);
                                                  printf("\t  ==============================================\n");
                                                  }while(q2<1 || q2>2);
                                                  if(q2==1){
                                                    i++;
                                                  }else{
                                                    i=i;
                                                  }
                                                  /*3*/
                                                  printf("---------------------------------------------------------------------\n");
                                                  printf("\t  3-que signifient 'WWW' en informatique ?\n",nom);
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\t  1-world wide wireless        2-web world widget\n");
                                                  printf("\t  3-world wide web          4-Rien du tout\n");
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\n");
                                                  printf("\n");
                                                  printf("\t  choisir entre 1 ou 2 ou 3 ou 4\n");
                                                  printf("\t  ==============================================\n");
                                                  do{
                                                  printf("\t  >entre votre reponse ici  ==> ");
                                                  scanf("%d",&q3);
                                                  printf("\t  ==============================================\n");
                                                  }while(q3<1 || q3>4);
                                                  if(q3==3){
                                                    i++;
                                                  }else{
                                                    i=i;
                                                  }
                                                  /*4*/
                                                  printf("---------------------------------------------------------------------\n");
                                                  printf("\t  4-quel est l'element qui n'appartient pas a \n \t  la famille software?\n",nom);
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\t  1-avast               2-web world widget\n");
                                                  printf("\t  3-microsoft Excel          4-cd-rom\n");
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\n");
                                                  printf("\n");
                                                  printf("\t  choisir entre 1 ou 2 ou 3 ou 4\n");
                                                  printf("\t  ==============================================\n");
                                                  do{
                                                  printf("\t  >entre votre reponse ici  ==> ");
                                                  scanf("%d",&q4);
                                                  printf("\t  ==============================================\n");
                                                  }while(q4<1 || q4>4);
                                                  if(q4==4){
                                                    i++;
                                                  }else{
                                                    i=i;
                                                  }
                                                  /*5*/
                                                  printf("---------------------------------------------------------------------\n");
                                                  printf("\t  5-cherchez l'intrus parmi ces portes logiques?\n",nom);
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\t  1-ET               2-DANS\n");
                                                  printf("\t  3-OU               4-OU\n");
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\n");
                                                  printf("\n");
                                                  printf("\t  choisir entre 1 ou 2 ou 3 ou 4\n");
                                                  printf("\t  ==============================================\n");
                                                  do{
                                                  printf("\t  >entre votre reponse ici  ==> ");
                                                  scanf("%d",&q5);
                                                  printf("\t  ==============================================\n");
                                                  }while(q5<1 || q5>4);
                                                  if(q5==2){
                                                    i++;
                                                  }else{
                                                    i=i;
                                                  }
                                                  /*6*/
                                                  printf("---------------------------------------------------------------------\n");
                                                  printf("\t  6-cherchez l'intrus ?\n",nom);
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\t  1-cle usb               2-poste de travail\n");
                                                  printf("\t  3-carte memoire               4-disque dur\n");
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\n");
                                                  printf("\n");
                                                  printf("\t  choisir entre 1 ou 2 ou 3 ou 4\n");
                                                  printf("\t  ==============================================\n");
                                                  do{
                                                  printf("\t  >entre votre reponse ici  ==> ");
                                                  scanf("%d",&q6);
                                                  printf("\t  ==============================================\n");
                                                  }while(q6<1 || q6>4);
                                                  if(q6==2){
                                                    i++;
                                                  }else{
                                                    i=i;
                                                  }

                                                  /*7*/
                                                  printf("---------------------------------------------------------------------\n");
                                                  printf("\t  7- Les imprimantes, webcam, clés USB que l'on peut brancher à un ordinateur sont :?\n",nom);
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\t  1-Des logiciels               2-Des composants\n");
                                                  printf("\t  3-Des périphériques               \n");
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\n");
                                                  printf("\n");
                                                  printf("\t  choisir entre 1 ou 2 ou 3 \n");
                                                  printf("\t  ==============================================\n");
                                                  do{
                                                  printf("\t  >entre votre reponse ici  ==> ");
                                                  scanf("%d",&q7);
                                                  printf("\t  ==============================================\n");
                                                  }while(q7<1 || q7>3);
                                                  if(q7==3){
                                                    i++;
                                                  }else{
                                                    i=i;
                                                  }

                                                  /*8*/
                                                  printf("---------------------------------------------------------------------\n");
                                                  printf("\t  8- Un écran est composé de \n",nom);
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\t  1-Pixels               2-cubis\n");
                                                  printf("\t  3-Points              \n");
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\n");
                                                  printf("\n");
                                                  printf("\t  choisir entre 1 ou 2 ou 3 \n");
                                                  printf("\t  ==============================================\n");
                                                  do{
                                                  printf("\t  >entre votre reponse ici  ==> ");
                                                  scanf("%d",&q8);
                                                  printf("\t  ==============================================\n");
                                                  }while(q8<1 || q8>3);
                                                  if(q8==1){
                                                    i++;
                                                  }else{
                                                    i=i;
                                                  }

                                                  /*9*/
                                                  printf("---------------------------------------------------------------------\n");
                                                  printf("\t  9-Une fenêtre est un rectangle permettant d'afficher le contenu d'un dossier, un logiciel ?\n",nom);
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\t       1-vrai               2-faux\n");
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\n");
                                                  printf("\n");
                                                  printf("\t  choisir entre 1 ou 2 \n");
                                                  printf("\t  ==============================================\n");
                                                  do{
                                                  printf("\t  >entre votre reponse ici  ==> ");
                                                  scanf("%d",&q9);
                                                  printf("\t  ==============================================\n");
                                                  }while(q9<1 || q9>2);
                                                  if(q9==1){
                                                    i++;
                                                  }else{
                                                    i=i;
                                                  }

                                                  /*10*/
                                                  printf("---------------------------------------------------------------------\n");
                                                  printf("\t  10-Un raccourci est une icône permettant de se rendre plus rapidement vers un dossier ou un fichier ?\n",nom);
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\t       1-vrai               2-faux\n");
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\n");
                                                  printf("\n");
                                                  printf("\t  choisir entre 1 ou 2 \n");
                                                  printf("\t  ==============================================\n");
                                                  do{
                                                  printf("\t  >entre votre reponse ici  ==> ");
                                                  scanf("%d",&q10);
                                                  printf("\t  ==============================================\n");
                                                  }while(q10<1 || q10>2);
                                                  if(q10==1){
                                                    i++;
                                                  }else{
                                                    i=i;
                                                  }
                                                  /*11*/
                                                  printf("---------------------------------------------------------------------\n");
                                                  printf("\t  11-Qu'est ce qu'un anti-virus?\n",nom);
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\t  1-un logiciel qui protège l'ordinateur contre l'intrusion de virus\n");
                                                  printf("\t  2-un programme qui permet de formater votre ordinateur\n");
                                                  printf("\t  3-un logiciel corrigeant les anomalies des fichiers\n");
                                                  printf("\t  4-un programme qui détruit les fichiers endommagés\n");
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\n");
                                                  printf("\n");
                                                  printf("\t  choisir entre 1 ou 2 ou 3 ou 4\n");
                                                  printf("\t  ==============================================\n");
                                                  do{
                                                  printf("\t  >entre votre reponse ici  ==> ");
                                                  scanf("%d",&q11);
                                                  printf("\t  ==============================================\n");
                                                  }while(q11<1 || q11>4);
                                                  if(q11==1){
                                                    i++;
                                                  }else{
                                                    i=i;
                                                  }

                                                  /*12*/
                                                  printf("---------------------------------------------------------------------\n");
                                                  printf("\t  12-Qu'est-ce que le Wifi ?\n",nom);
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\t  1-un réseau câblé\n");
                                                  printf("\t  2-Un système de gestion de contenus de site web modifiable par les utilisateurs\n");
                                                  printf("\t  3-un réseau sans fil\n");
                                                  printf("\t  4-une connexion à internet par le réseau téléphonique\n");
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\n");
                                                  printf("\n");
                                                  printf("\t  choisir entre 1 ou 2 ou 3 ou 4\n");
                                                  printf("\t  ==============================================\n");
                                                  do{
                                                  printf("\t  >entre votre reponse ici  ==> ");
                                                  scanf("%d",&q12);
                                                  printf("\t  ==============================================\n");
                                                  }while(q12<1 || q12>4);
                                                  if(q12==3){
                                                    i++;
                                                  }else{
                                                    i=i;
                                                  }

                                                  /*13*/
                                                  printf("---------------------------------------------------------------------\n");
                                                  printf("\t  13-Un port USB NE PERMET PAS de connecter à son ordinateur: ?\n",nom);
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\t  1-une souris\n");
                                                  printf("\t  2-un appareil photo numérique\n");
                                                  printf("\t  3-un clavier\n");
                                                  printf("\t  4-un écran\n");
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\n");
                                                  printf("\n");
                                                  printf("\t  choisir entre 1 ou 2 ou 3 ou 4\n");
                                                  printf("\t  ==============================================\n");
                                                  do{
                                                  printf("\t  >entre votre reponse ici  ==> ");
                                                  scanf("%d",&q13);
                                                  printf("\t  ==============================================\n");
                                                  }while(q13<1 || q13>4);
                                                  if(q13==4){
                                                    i++;
                                                  }else{
                                                    i=i;
                                                  }

                                                  /*14*/
                                                  printf("---------------------------------------------------------------------\n");
                                                  printf("\t  14-Trouvez l'intrus?\n",nom);
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\t  1-Linux\n");
                                                  printf("\t  2-Word\n");
                                                  printf("\t  3-Windows\n");
                                                  printf("\t  4-Mac OS\n");
                                                  printf("\t  ______________________________________________\n");
                                                  printf("\n");
                                                  printf("\n");
                                                  printf("\t  choisir entre 1 ou 2 ou 3 ou 4\n");
                                                  printf("\t  ==============================================\n");
                                                  do{
                                                  printf("\t  >entre votre reponse ici  ==> ");
                                                  scanf("%d",&q14);
                                                  printf("\t  ==============================================\n");
                                                  }while(q14<1 || q14>4);
                                                  if(q14==2){
                                                    i++;
                                                  }else{
                                                    i=i;
                                                  }



                                            break;
                                            /*222222222222222222222222222222222*/
                                            case 2:
                                                i=8;
                                            break;
                                            case 3:
                                                i=11;
                                            break;
                                            case 4:
                                                i=18;
                                            break;
                                            case 5:
                                                i=14;
                                            break;
                                            case 6:
                                                i=16;
                                            break;

                                }
//***************************************************************************************************
//pour le score
printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
  if(i<=5){
  printf("\t \t  TRES FAIBLE vous avez %d point sur 20\n",i);
  }else if(i<10 && i>5){
  printf("\t \t    FAIBLE vous avez %d point sur 20\n",i);
  }else if(i>=10 && i<=12){
  printf("\t \t    MOYEN vous avez %d point sur 20\n",i);
  }else if(i>=13 && i<=15){
  printf("\t \t    BIEN vous avez %d point sur 20\n",i);
  }else if(i>=16 && i<=17){
  printf("\t \t TRES BIEN vous avez %d point sur 20\n",i);
  }else if(i>17){
  printf("\t \t   EXELANT vous avez %d point sur 20\n",i);
  }
printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
 //***************************************************************************************************
              break;
              case 2://donner de l aide
                                printf("1/-vous allez entrer votre nom\n");
                                printf("2/-apres vous aller choisir un domain \n");
                                printf("3/-vous allez avoir 20 question et choisir une reponse parmi 4 \n ");
                                printf("4/-vous aller voir votre resultat à la fin\n");
                                printf("                                   merci");
              break;
  }
}

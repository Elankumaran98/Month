#include <stdio.h>
void main(){
int i,j,k;
int days,stdate;
char ch;
for(;;){
printf("Enter no of dates :");scanf("%d",&days);
printf("stating date [1-Mon~7-Sun] :");scanf("%d",&stdate);
printf("\n\n\t\t The Month you need\n");
printf("\t\t ==================\n");
printf("Mon\tTue\tWed\tThu\tFri\tSat\tSun\n");
for (k=1;k<stdate;k++){
printf("\t "); }
j=stdate;
for(i=1;i<=days;i++,j++){
if(j==8){
printf("\n");
j=1; }
printf("%d\t",i); }
printf("\nDo you need to continue [y/n]:"); scanf("%c",&ch);
if(ch=='n')
break;
}}


/*
prog 80
*/

#include<stdio.h>
int main(){
int i,j,a[3][3];

i=0;


while(i<3){

j=0;

while(j<3){

scanf("%d",&a[i][j]);
j++;
}
i++;
}

i=0;

while(i<3){

j=0;

while(j<3){

printf("%d",a[i][j]);
j++;
}
i++;
}
}

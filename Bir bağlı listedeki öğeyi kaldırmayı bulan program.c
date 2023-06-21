#include <stdio.h>
#include <stdlib.h>

int main()
{
int dizi[20],boyut;
printf("Olusturmak istediginiz dizinin eleman sayisini giriniz:");
scanf("%d",&boyut);
for(int i=0;i<boyut;i++){
    printf("Dizinin %d. elemani:",i+1);
    scanf("%d",&dizi[i]);
}
int e[100]={0};
for(int i=0;i<boyut;i++){
    for(int j=0;j<boyut;j++){
        if(dizi[i]==dizi[j]){
            e[i]+=1;
        }
    }
}
int buyuk,sayac=0;
for(int i=0;i<boyut;i++){
for(int j=0;j<boyut;j++){
if(e[i]>=e[j]){
    sayac=1;
}
else{
    sayac=0;
}
}
if(sayac==1){
buyuk=i;
break;
}
sayac=0;
}
printf("Dizide max tekrar eden karakter =%d",dizi[buyuk]);
    return 0;
}

#include<stdio.h>
#define SIZE 100
//ayshik edit
int main()
{
 char a[SIZE],alp;int l,k=0,i;
 printf("\n Enter the sentence:");
 gets(a);
 printf("\n Enter the alphabet whose frequency you want to find :");
 scanf("%c",&alp);
 for(i=0; a[i]!='\0'; i++)
 {
  l++;
 }
 for(i=0; i<l ; i++)
 {                  
  if(alp==a[i])
  k++;
 }
 printf("\n The frequency of the entered alphabet is: %d",k);
 return 0;
}


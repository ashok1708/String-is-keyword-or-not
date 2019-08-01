#include<stdio.h>
#include<string.h>
void main()
{
  char keyword[14][10]={"auto","double","int","struct","break","else","long",
                         "switch","case","enum","do","if","static","while"} ;
       
   char str[10];
   int flag=0,i;


   printf("enter any string:");
   gets(str);

   for(i=0;i<32;i++)
   {
     if(strcmp(str,keyword[i])==0)
     {
       flag=1;
     }
   }
   
   if(flag==1)
    printf("%s is a keyword ",str);
    else
     printf("%s is a not keyword ",str);
}


 


#include<stdio.h>

int main()
{
	 int n, count=1, number, i=2, j;
	 printf("Kolik prvocisel chte vygenerovat? \n");
	 scanf("%d", &n);
	
	 //Generovani prvocisla zadaneho do promenne N
	 while(count <= n){
		  number = 0;
		  for(j=2; j <= i/2; j++){
			   if(i%j==0){
			    number=1;
			    break;
			   }
		  }
		  if(number==0){
			   printf("%d\t",i);
			   count++;
		  }
		  i++;
	 }
return(0);
}
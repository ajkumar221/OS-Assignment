	#include<stdio.h>
	#include <stdlib.h>
	#include<math.h>
	
	void scan(int noq, int qu[10], int st, int ch)
	{
	 int i,j,s=0;
	 for(i=0;i<noq;i++)
	 {
	  if(st < qu[i])
	  {
	   for(j=i-1; j>= 0;j--)
	   {
	    s=s+abs(st - qu[j]);
	    st = qu[j];
	    }
	   if(ch == 3)
	   {
	   s = s + abs(st - 0);
	   st = 0;
	   }
	  for(j = 0;j < noq;j++)
	  {
	   s= s + abs(st - qu[j]);
	   st = qu[j];
	   }
	  break;
	 }
	}
	printf("\n Total seeking distance : %d",s);
	}
	
	int main()
	{
		 char ch = 'y';
		 int n,qu[20],st,i,j,t,noq,visit[20];
	
	 while(ch == 'y' || ch == 'Y')
		{	
		 printf("\nEnter the maximum number of cylinders : ");
		 scanf("%d",&n);
		 printf("\nEnter number of queue elements : ");
		 scanf("%d",&noq);
		 printf("\nEnter the queue elements : ");
		
		 for(i=0;i<noq;i++)
		 {
		  	scanf("%d",&qu[i]);
		  	visit[i] = 0;
		 }
		 
		 printf("\nEnter the disk head starting position : ");
		 scanf("%d",&st);
		 scan(noq,qu,st,ch);
		 
	
		    printf("\n\n........Want to run the program again? (y/n): ");
		  	scanf("%s",&ch);
		  	system("cls");
		 }
	}

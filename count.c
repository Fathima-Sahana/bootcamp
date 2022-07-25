#include <stdio.h>
#include <string.h>
 
void main()
{
  	char str[100], ch;
  	int i, Count;
  	Count = 0;
 
  	printf("\n Enter any String :  ");
  	gets(str);
  	
  	printf("\n Enter the Character that you want to Search for :  ");
  	scanf("%c", &ch);
  	
  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == ch)  
		{
  			Count++;
 		}
	}
	printf("\n Total Number of times '%c' has Occured = %d ", ch, Count);
	
  	
}

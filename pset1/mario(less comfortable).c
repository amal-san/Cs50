#include<stdio.h>
#include <ctype.h>

int main(void)
 {
	int h;
	int c = 2;
	printf("Height: ");
	scanf("%d", &h);
	int x = h + 1;
	if(h > 0 && h < 23)
	{
	   int i;
	   for(i=1;i<=h;i++) {
		int j;
		int y = x - c;
		int k;
		for(k=0;k<y;k++) {
		
			printf(" ");			
		}
		for(j=0;j<=i;j++) {	
			printf("#");
		}
	     printf("\n");
	     c++;
	     }
	  
 	}
	else {

		main();
	}
}

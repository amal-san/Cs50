#include<stdio.h>
#include<string.h>

int main(){
   char str[100];
   printf("Enter the plaintext: \n");
   scanf("%s",str);
   int length = strlen(str);
   char c[100];
   int i=0;
   char d[100];
   printf("Plaintext: %s\n",str);
   for (i=0;i<length;i++)
   {  
     if(str[i] >='a' && str[i] <='z')
	{
    	 if(str[i] !=EOF)
    	  {
		if(d[i] = (str[i] + 12 ) <= 'z')
		  {
			d[i] += str[i] + 12;
		  }
		else
		  {
			d[i] += str[i] - 12;    
   
		  }
    	   }
       }  
   }

   printf("Ciphertext :%s", d );
   return 0;
}

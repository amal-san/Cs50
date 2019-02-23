#include<stdio.h>
#include<string.h>
#include <unistd.h>


int main( int argc, char* argv[]) {


  if(argc !=2 ) {
	
     printf("Usage: ./crack hash");
     return 0;
	}
  char salt[3];
  char name[6] = "\0\0\0\0\0\0"; 

  string brute = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\0";
  int brute_count = 53;
  string hash = argv[1];

  memcpy(salt,hash,2);
  salt[2] = "\0";

  for(int i=0;i<brute_count;i++) 
   {
	for(int j =0;j<brute_count;j++)
     	   {
		for (int k=0;k<brute_count;k++)
		  {
			for (int l=0;l<brute_count;l++)
			 {
			     for(int h=0;h<brute_count;h++)
				{
				   name[0]= brute[h];
			           name[1]= brute[l];
				   name[2]= brute[k];
				   name[3]= brute[j];
				   name[4]= brute[i];
				   if(strcmp(crypt(name,salt),hash) == 0) 
				    {
					printf("%s\n",name);
					return 0;
				    }
				
				}
			}
		}
	}
  }

  printf("password can't be cracked");
  return 2;
}

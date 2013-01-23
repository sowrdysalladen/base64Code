#include <stdio.h>
#include <conio.h>
#include <string.h>
void main() {


	char a,b,c;
	char d,e,f,g;
	int bin1=0;
	int  op1=0;
	int i=0;
//	char ch;
	
  FILE *p;
	char arr[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T',
		       'U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o',
			   'p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','+','/'};

	



	
   
  p = fopen("abc.txt", "r+");
  if (p) 
  {
  printf("True\n");
  } 
  else 
  {
  printf("False\n");
  }

  printf("\nBismillah......\n");

  a='a'; 
  b='b';
  c='c';

  bin1=a;
   printf("\nValue of 'a' is :%li \n",bin1);

	op1=b;
	bin1=bin1|(op1<<8);
	printf("\nValue of 'b' is :%li \n",bin1);

	op1=c;
	bin1=bin1|(op1<<16);
	printf("\nValue of 'c' is: %li \n",bin1);
	
	
	//abc
	d=((bin1>>6)<<6)^bin1;
	d=arr[d];
	
	bin1=((bin1>>6));

	e=((bin1>>6)<<6)^bin1;
	e=arr[e];

	bin1=((bin1>>6));

	f=((bin1>>6)<<6)^bin1;
	f=arr[f];

	bin1=((bin1>>6));

	g=bin1;
	g=arr[g];
	
	fwrite(&d, 1, 1, p);
    fwrite(&e, 1, 1, p);
    fwrite(&f, 1, 1, p);
    fwrite(&g, 1, 1, p);
 



  fclose(p);
  printf("\nPress Eneter to exit\n");
  getchar();
}

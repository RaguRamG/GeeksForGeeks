/*permutation of string*/



 

# include <stdio.h>
void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
 
void permute(char *a, int i, int n)
{
   int j;
	//printf("before i:%d\n",i) ;	
//	printf("%s\n",a);
	
   if (i == n)
     printf("%s\n", a);
   else
   {
        for (j = i; j <= n; j++)
       {
	//printf("value j:%d\n",j);	
          swap((a+i), (a+j));
	//printf("after i:%d\n",i);	
          permute(a, i+1, n);
	//printf("hello\n");
          swap((a+i), (a+j)); //backtrack
       }
   }
}
 
int main()
{
   char a[] = "ABC"; 
   permute(a, 0, 2);
   getchar();
   return 0;
}

#include <iostream>
#include<string.h>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort
using namespace std;
int main () {
  char myints[]="123";	
	int sum=0;
  cout << "The 3! possible permutations with 3 elements:\n";
  do {
		sum+=atoi(myints);
	       cout<<myints<<"\n";	 
    }while ( next_permutation(myints,myints+3) );
cout<<"\n"<<sum<<"\n";
  return 0;
}

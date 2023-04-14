#include<iostream>
#include<string.h>

using namespace std ;

class workers {
	
	private :
		int a=50 ;
		char name[50] = "dhairya" ;
		
	public :
		int salary=50 ;
		char id[50] = "dhruv" ; 
		
};

int main (){
	
	workers o ;
	
	cout<<o.id<<endl ;
	cout<<o.salary ;
	
	return 0 ;
}

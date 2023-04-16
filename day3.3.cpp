#include<iostream>
#include<string.h>

using namespace std ;

class Cars {
	
	public :
		int id;
	    char model[50];
	    char color[50];
		int year;
		char company_name[50];
	
};

int main (){
	
	Cars o1 , o2 , o3 , o4 , o5 ;
	
	
	o1.id = 1 ;
	strcpy(o1.model,"harrier");
	strcpy(o1.color,"black");
	o1.year = 4 ;
	strcpy(o1.company_name,"tata");
	
	cout<<o1.id<<endl;
	cout<<o1.model<<endl;
	cout<<o1.color<<endl;
	cout<<o1.year<<endl;
	cout<<o1.company_name<<endl<<endl<<endl;
	
	o2.id = 2 ;
	strcpy(o2.model,"Defender");
	strcpy(o2.color,"white");
	o2.year = 3 ;
	strcpy(o2.company_name,"ford");
	
	cout<<o2.id<<endl;
	cout<<o2.model<<endl;
	cout<<o2.color<<endl;
	cout<<o2.year<<endl;
	cout<<o2.company_name<<endl<<endl<<endl;
	
	o3.id = 3 ;
	strcpy(o3.model,"Punch");
	strcpy(o3.color,"black");
	o3.year = 2 ;
	strcpy(o3.company_name,"tata");
	
	cout<<o3.id<<endl;
	cout<<o3.model<<endl;
	cout<<o3.color<<endl;
	cout<<o3.year<<endl;
	cout<<o3.company_name<<endl<<endl<<endl;
	
	o4.id = 4 ;
	strcpy(o4.model,"ciaz");
	strcpy(o4.color,"metelic silver");
	o4.year = 5 ;
	strcpy(o4.company_name,"maruti suzuki");
	
	cout<<o4.id<<endl;
	cout<<o4.model<<endl;
	cout<<o4.color<<endl;
	cout<<o4.year<<endl;
	cout<<o4.company_name<<endl<<endl<<endl;
	
	
	
	return 0 ;
}

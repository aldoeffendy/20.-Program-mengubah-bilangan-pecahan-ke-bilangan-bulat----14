#include <iostream>
using namespace std;

int main(){
	
	int s,b,hasil;
	
	cout<<"===> PROGRAM MENGUBAH BILANGAN PECAHAN KE BILANGAN BULAT <==="<<endl;
	cout<<endl;
	
	cout<<"Masukan pembilang : ";
	cin>>b;
	cout<<"Masukan penyebut : ";
	cin>>s;
	
	cout<<"			"<<b<<endl;
	cout<<"Bilangan pecahannya :	- "<<endl;
	cout<<"			"<<s<<endl;
	
	hasil=b/s;
	
	cout<<"\nHasil nya adalah = "<<hasil<<endl;
	
	return 0;
	
}

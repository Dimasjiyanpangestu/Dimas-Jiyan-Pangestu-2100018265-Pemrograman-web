#include <iostream>
#include <string>

using namespace std;

int main (){
	string nama;
	string Univ;
	string alamat;
	string nim;
	string jurusan;
	
	cout<<"Masukan Data Berikut : "<<endl<<endl;
	cout<<"Nama    : ";
	getline (cin, nama); 
	
	cout<<"Univ    : ";
	getline (cin, Univ);
	 
	cout<<"Alamat  : ";
	getline (cin, alamat); 
	 
	cout<<"NIM     : ";
	getline (cin, nim); 
	 
	cout<<"Jurusan : ";
	getline (cin, jurusan); 
	
	cout<<endl;
	cout<<"DATA MAHASISWA"<<endl; 
	cout<<"------------------------------"<<endl;
	
	cout<<"Nama    : "<<nama<<endl;
	cout<<"Univ    : "<<Univ<<endl;
	cout<<"Alamat  : "<<alamat<<endl;
	cout<<"NIM     : "<<nim<<endl;
	cout<<"Jurusan : "<<jurusan<<endl;

}
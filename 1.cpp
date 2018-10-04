#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){
	
	int angka[5],banyak,a;
	float rata,hasil;		
	
	cout<<"Berapa Angka Yang Akan Anda Masukan : ";cin>>banyak;
	
	for( a=0;a<=banyak-1;a++){
		cout<<"Masukan angka ke - "<<a+1<<" : ";cin>>angka[a];
		hasil+=angka[a];
	}
	rata= hasil/banyak;
	cout<<"Hasil Rerata dari angka yang anda masukan adalah : "<<rata;
}

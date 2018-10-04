#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    int n,i,xxc,x[20],y;
    float rata,sd;
    xxc=0;y=0;

	cout<<"Masukan banyak data : ";cin>>n;

    for (i=1;i<=n;i++){
    	cout<<"Masukan data ke - "<<i<<" : ";cin>>x[i];
        xxc+=x[i];
    }
    rata= xxc/n;

    for (i=1;i<=n;i++){
        y=y+((x[i]-rata)*(x[i]-rata));
    }
    sd= sqrt((y)/(n-1));
    //cout<<"Outputnya adalah : "<<sd<<endl;
    printf("Hasil Standar Deviasi = %.2f",sd);
    return 0;
}

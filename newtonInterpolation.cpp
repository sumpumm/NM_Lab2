#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	float ax[n],gx[n],x,nu,de,y=0;
	cout<<"Enter the number of data";
	cin>>n;
	cout<<endl<<"Enter the elements in x";
	for(i=0;i<n;i++){
		cin>>ax[i];
	}
	cout<<endl<<"Enter the elements in f(x)";
	for(i=0;i<n;i++){
		cin>>gx[i];
	}
	cout<<endl<<"Enter the value of x = ";
	cin>>x;

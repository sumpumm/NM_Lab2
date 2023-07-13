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
	for(i=0;i<n;i++){
		nu=1;
		de=1;
		for(j=0;j<n;j++){
			if(i!=j){
				nu*=x-ax[j];
				de*=ax[i]-ax[j];
			}
		}
		y=y+(nu/de)*gx[i];
	}	
	cout<<endl<<"The value of f(x) at "<<x<<" is "<<y;
	return 0;
}

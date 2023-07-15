#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i,j;
	cout<<"ENter the number of points : ";
	cin>>n;
	float xm,x[n],fx[n],dd[n];

	cout<<endl<<"Enter interpolation point : ";
	cin>>xm;
	cout<<endl<<"Enter points :";
	for(i=0;i<n;i++){
		cin>>x[i];	
	}
	cout<<endl<<"Enter f(x) :";
	for( i=0;i<n;i++){
		cin>>fx[i];
	}
	//calculating first dd
	for( i=0;i<=n-1;i++){
		dd[i]=fx[i];
	//cout<<endl<<dd[i];
	}
	//calculate second to nth DD
	for(i=0;i<=n-1;i++){
		for( j=n-1;j>=i+1;j--){
			dd[j]=(dd[j]-dd[j-1])/(x[j]-x[j-1-i]);
		}
	}

	double v=0,p=1;
	//calculate interpolated value as
	for( i=0;i<=n-1;i++){
		p=1;
		for( j=0;j<=i-1;j++){
			p=p*(xm-x[j]);
		}
		v=v+dd[i]*p;
		//cout<<endl<<dd[i];
	}
	cout<<endl<<"The interpolated value is : "<<v;
	return 0;
}

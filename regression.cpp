
#include<iostream>
#include<cmath>
using namespace std;
int main(){

	int n=5;
	double sum_x=0,sum_y=0,sum_x2=0,sum_xy=0;
	double x[n],y[n],value;

	cout<<"Enter the value of x : ";
	for(int i=0;i<n;i++){
	
		cin>>x[i];
	}
	cout<<endl;
cout<<"Enter the value of y : "; 
	for(int i=0;i<n;i++){ 
	cin>>y[i];
	}
for(int i=0;i<5;i++){
 sum_x+=x[i];
 sum_y+=y[i];
 sum_x2=sum_x2+pow(x[i],2);
 sum_xy=sum_xy+(x[i]*y[i]);
}

double B,A;
B= ((n*sum_xy) - (sum_x*sum_y)) /((n*sum_x2) -pow(sum_x, 2)) ;
A=(sum_y/n) -B*(sum_x/n);
cout<<"A = "<<A<<endl;
cout<<"B = "<<B<<endl;
return 0;
}

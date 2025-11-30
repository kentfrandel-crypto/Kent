// name:KENTSOP NGUELEWE FRANDEL
//DEPARTMENT:SOFTWARE ENGINEERING
//FACULTY OF SCINCE





#include <iostream>
#include<math.h>
using namespace std;

double rootofeq(double a,double b,double c){
	double realPart,imarginaryPart,d,r1,r2;
	d=(b*b-4*a*c);
	cout<<"d is:"<<d;
	if(d>0){
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		cout<<"\n root are\n"<<r1<<"and"<<r2;
		return r1&&r2;
	}else if(d==0){
		r1=r2=-b/(2*a);
		cout<<"\n root is\n"<<r1;
		return r1;
	}else{
		realPart=-b/(2*a);
		imarginaryPart=(-d)/(2*a);
		cout<<"\n root are\n"<<"r1="<<realPart+imarginaryPart<<"\nand\n"<<"r2="<<realPart-imarginaryPart;
		return  realPart+imarginaryPart &&realPart-imarginaryPart;
	}
}

int main(int argc, char** argv) {
	double a,b,c;
	cout<<"entrer three nu ax^2+bx+c\n";
	cin>>a>>b>>c;
	cout <<rootofeq(a,b,c)<<"\n";
	return 0;
}
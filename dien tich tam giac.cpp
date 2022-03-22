#include <stdio.h>
int main (){
	int a,b,c,p,s= 0;
	printf ("nhap vao ba canh cua tam giac:");
	scanf ("%d %d %d",&a,&b,&c);
	p=(a+b+c)/2;
	s = p*( p - a)*( p - b)*( p - c) ;
	printf ("dien tich tam gia la: %d",s);
	return 0;
}
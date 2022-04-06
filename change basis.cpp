#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int length(int);
int hextodec(string);
int dectohex(int);
int dec(int,int);
int main()
{
 int a,b,c,s,h,m;
 string d;
 int sum,p=0;
 cout <<"please enter first basis :";
 cin >>b;
 cout <<"and second basis :";
 cin >>c;
 if(b ==16)
 {
 	cout <<"enter number in hexadcimal :";
 	cin >>d;
 	sum=hextodec(d);
 }
 else if(c==16 && b != 10)
 {
 	cout <<"enter number :";
 	cin >>a;
 	sum=dec(a,b);
 	dectohex(sum);
 	exit(0);
 }
 else if(b==10 && c==16)
 {
 	cout <<"enter number :";
 	cin >>a;
 	cout << dectohex(a);
 }
 else
 {
 cout <<"enter your number :";
 cin >>a;
 sum = dec(a,b);
}
 if(c<16 && c>=2)
 {
   while(sum !=0)
   {
   		s=(sum%c)*pow(10,p)+s;
   		sum/=c;
   		p++;
	   h--;
   }
   cout <<s;
 }

	return 0;
}
int length(int a)
{
	int h=0;
	while(a>0)
	{
		a/=10;
		h++;
	}
	return h;
}
int hextodec(string  a)
{
	int s=0;
     for(int i=0;i <=a.length();i++)
     {
     	if(a[i] >='0' && a[i] <='9')
     	{
     		s= (a[i]-48)*pow(16,a.length()-i-1) +s;
		 }
		 else if(a[i] >='A'&& a[i] <='F')
		 {
		 	s=(a[i]-55)*pow(16,a.length()-i-1) +s;
		 }
	 }
	 return s;
}
int dectohex(int a)
{
	int h=0;
	int s;
	int r=a;
	
		while(r>0)
		{
		h++;
	r/=16;	
}
while(h>0)
{
   int l=a;
	for(int i=h;i >0;i--)
	{
		s=l%16;
		l/=16;
	}
		if(s >=10)
		{
	   switch(s)
	   {
	   	case 10:
	   		cout <<'A';
	   		break;
	   		case 11:
	   			cout <<'B';
	   			break;
	   			case 12:
	   				cout <<'C';
	   				break;
	   				case 13:
	   					cout <<'D';
	   					break;
	   					case 14:
	   						cout <<'E';
	   						break;
	   						case 15:
	   							cout <<'F';
	   							break;
	   }
}
else
{
	cout <<s;
}
h--;
}
} 

int dec(int a,int b)
{
	int sum=0;
	int k=0;
	 for(int i=a;i>0;i/=10)
 {
 	if(i%10<b)
 	{
 	sum =i%10 *pow(b,k) +sum;
 	k++;
 }
 else
 {
 	cout <<"one of the numbers is greater than basis!!";
 	break;
 }
 }
 return sum;
}

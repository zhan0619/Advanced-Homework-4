#include <iostream>
using namespace std ;

int main (int argc,char** argv)
{
	int year,month,date,time,Feb,days,a;
	cout<<"��J�A�����"<< endl;
	cout<<"�~��:";
	cin>>year;
	cout<<"���:";
	cin>>month;
	cout<<"���:";
	cin>>date;
	if(year%400==0)
	{
		Feb=29;
	}
	else
	{
		Feb=28;
	}
		switch(month)
		{
			case 1 :
				days=0;
				a=days+date;
				cout <<year<<"�~"<<month<<"��"<<date<<"��"<< "�O�@�~������"<<a<<"��"<< endl;
				break;
			case 2 :
				days=31;
				a=days+date;
				cout <<year<<"�~"<<month<<"��"<<date<<"��"<< "�O�@�~������"<<a<<"��"<< endl;
				break;
			case 3 :
				days=31;
				a=days+date+Feb;
				cout <<year<<"�~"<<month<<"��"<<date<<"��"<< "�O�@�~������"<<a<<"��"<< endl;
				break;
			case 4 :
				days=62;
				a=days+date+Feb;
				cout <<year<<"�~"<<month<<"��"<<date<<"��"<< "�O�@�~������"<<a<<"��"<< endl;
				break;
			case 5 :
				days=92;
				a=days+date+Feb;
				cout <<year<<"�~"<<month<<"��"<<date<<"��"<< "�O�@�~������"<<a<<"��"<< endl;
				break;
			case 6 :
				days=123;
				a=days+date+Feb;
				cout <<year<<"�~"<<month<<"��"<<date<<"��"<< "�O�@�~������"<<a<<"��"<< endl;
				break;
			case 7 :
				days=153;
				a=days+date+Feb;
				cout <<year<<"�~"<<month<<"��"<<date<<"��"<< "�O�@�~������"<<a<<"��"<< endl;
				break;
			case 8 :
				days=184;
				a=days+date+Feb;
				cout <<year<<"�~"<<month<<"��"<<date<<"��"<< "�O�@�~������"<<a<<"��"<< endl;
				break;
			case 9 :
				days=215;
				a=days+date+Feb;
				cout <<year<<"�~"<<month<<"��"<<date<<"��"<< "�O�@�~������"<<a<<"��"<< endl;
				break;
			case 10 :
				days=245;
				a=days+date+Feb;
				cout <<year<<"�~"<<month<<"��"<<date<<"��"<< "�O�@�~������"<<a<<"��"<< endl;
				break;
			case 11 :
				days=276;
				a=days+date+Feb;
				cout <<year<<"�~"<<month<<"��"<<date<<"��"<< "�O�@�~������"<<a<<"��"<< endl;
				break;
			case 12 :
				days=306;
				a=days+date+Feb;
				cout <<year<<"�~"<<month<<"��"<<date<<"��"<< "�O�@�~������"<<a<<"��"<< endl;
				break;
		}
	system("pause");
    return 0;
} 

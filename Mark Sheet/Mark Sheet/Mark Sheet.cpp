# include <iostream>
# include <conio.h>
using namespace std;
int main (void)
 
{
	cout <<"--------2ND YEAR MARK SHEET MAKER----------"<<endl;
	int math;
	cout <<"Enter Your Math Marks Out Of (200): ";
	cin >> math;
	int physics;
	cout <<"Enter Your physics Marks Out Of (200): ";
	cin >> physics;
	int chemistry;
	cout <<"Enter Your Chemistry/Computer MarksOut Of (200): ";
	cin >> chemistry;
	int ur;
	cout <<"Enter Your urdu Marks Out Of (200): ";
	cin >> ur;
	int eng;
	cout <<"Enter Your English Marks Out Of (200): ";
	cin >> eng;
	int sst;
	cout <<"Enter Your S.S.T+Islamiat Marks Out Of (100): ";
	cin >> sst;
		
	int c;
	c=math+physics+chemistry+eng+ur+sst;
	cout <<endl<<endl<<endl<<"Your Total Marks Is Out Of (1100): " << c <<endl<<endl<<endl;

	float y;
	y=c*100/1100;
	cout <<"Your Percentage Is: " << y <<"%"<<endl<<endl<<endl;


if (y>=90&&y<=99)
{
	cout <<"Not Availablle"<<endl<<endl<<endl<<":p Hehehe You Are Not Able To Take 90 Above Percentage"<<endl<<endl<<endl;
}
	
if (y>=80&&y<=89)
{
	cout << "'A+'Garade"<<endl<<endl<<endl;
}
if (y>=70&&y<=79)
{
	cout << "'A'Garade"<<endl<<endl<<endl;
}
if (y>=60&&y<=69)
{
	cout << "'B'Garade"<<endl<<endl<<endl;
}
if (y>=50&&y<=59)
{
	cout << "'C'Garade"<<endl<<endl<<endl;
}
if (y>=40&&y<=49)
{
	cout << "'D'Garade"<<endl<<endl<<endl;
}
	system ("pause");
	getchar();
	return 0;
}	

#include<fstream>
#include<iostream>
#include<stdlib.h>
#include<iomanip>
//#include<ctime>
#include<windows.h>
using namespace std;
class SanoGraphics
{
	public:
	void graphics()
	{
	cout<<"\n\t\t\t\t\t\t\t      ________                                        ________";
	cout<<"\n\t\t\t\t\t\t\t     |        |                                      |        |";
  	cout<<"\n\t\t\t\t\t\t\t   __||||||||||                                      ||||||||||__";
  	cout<<"\n\t\t\t\t\t\t\t _|  ||||||||||______________________________________||||||||||  |_";
    cout<<"\n\t\t\t\t\t\t\t|_|  ||||||||||______________________________________||||||||||  |_|";
  	cout<<"\n\t\t\t\t\t\t\t  |__||||||||||                                      ||||||||||__|";
  	cout<<"\n\t\t\t\t\t\t\t     ||||||||||                                      ||||||||||";
  	cout<<"\n\t\t\t\t\t\t\t     |________|                                      |________|";
    }
};
class Member
{
	protected:
		string name,contact_no;
		int id,age,height,weight;
	
	public:
		void add_members();
};
class membership_time: public Member
{
	int day,month,year;
	public:
		void getMembership();
};
void Title_menu()
{
	cout<<endl<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t       GYM MANAGEMENT SYSTEM"<<endl;
	cout<<"\t\t\t\t\t\t\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
}
int menu(){
	char ch;
	cout<<endl<<"\t\t\t\t\t\t\t\t            1) Add Members...............";
	cout<<endl<<"\t\t\t\t\t\t\t\t            2) List Members..............";
	cout<<endl<<"\t\t\t\t\t\t\t\t            3) Find Members..............";
	cout<<endl<<"\t\t\t\t\t\t\t\t            4) Workout Sheet.............";
	cout<<endl<<"\t\t\t\t\t\t\t\t            5) Trainers Information......";
	cout<<endl<<"\t\t\t\t\t\t\t\t            6) Equipment Information.....";
	cout<<endl<<"\t\t\t\t\t\t\t\t            7) Exit......................";
	cout<<endl<<"\t\t\t\t\t\t\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t      Choice : ";
	cin>>ch;
	return ch;
}
void choice(char ch1){
	char ch2;
	switch(ch1){
		case '1':
			system("cls");
			cout<<"Hello";
		break;
		case '2':
			system("cls");
			cout<<"Hii";
		break;
		case '3':
			system("cls");
			cout<<"YoYo";
		break;
		case '4':
			system("cls");		
			cout<<"Nameste";
		break;
		case '5':
			system("cls");
			cout<<"hehe";
		break;
		case '6':
			system("cls");
			cout<<"Hoho";
		break;
		case '7':
			exit(0);
		break;
		default:
			cout<<"\t\t\t\t\t\t Invalid Choice!!!"<<endl;
			cout<<"\t\t\t\t\t\t Enter Valid Choice";
			Sleep(2000);
			system("cls");
			Title_menu();
			ch2 = menu();
			choice(ch2);
		break;
	}
}
int main(){
	char c;
	SanoGraphics dumbbell;
	dumbbell.graphics();
	Title_menu();
	c = menu();
	choice(c);
	return 0;
} 

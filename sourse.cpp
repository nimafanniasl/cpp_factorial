// nimafanniasl - smartnima.com

#include <iostream>
#include <conio.h>
using namespace std;

void run();
void cont2();
void inputf();
void inputf2();

int n;
int num;
int i;
char cont1;
double fact(int);


int main()
{
  inputf2();	
  run();
  cont2();
  getch();
}
double fact(int m)
{
if(m==0 || m==1)
return 1;
return m*fact(m-1);
}
void run()
{
	for(i=1;i<=num;i++)
	{
		cout<<endl<<"please enter a number:";
        cin>>n;
        cout<<endl<<endl<<"fact="<<fact(n)<<endl<<endl;
	}
}
void cont2()
{
	while(1)
   {
     cout<<endl<<"continue?(y or n): ";
     cin>>cont1;
     if(cont1=='y')
     {
       inputf();
       run();
     }
     else if (cont1=='n')
     {
   	  cout<<"bye!"<<endl<<"smartnima.com";
   	  break;
     }
     else
     {
   	  cout<<"error";
     }
   }
}
void inputf()
{
	cout<<endl<<"How many numbers do you want factorial? ";
    cin>>num;
}
void inputf2()
{
	cout<<"How many numbers do you want factorial? ";
    cin>>num;
}

// STRING ACCESSING FUNCTIONS
#include<iostream>
using namespace std;
main()
{

string s= "HELLO";
//substr()
string y;
y= s.substr(2,3);
cout<<y<<endl;    //LLO

//find() = at which position character is present inside string
int c=s.find("HE");
cout<<c<<endl;            //0
int d=s.find("HE", 4);
cout<<d<<endl;  //-1 is answer if find not able to find character

//find_first_of => giving position
int e=s.find_first_of("L");  
cout<<e<<endl;                 //2
int f=s.find_last_of("L");
cout<<f<<endl;                //3

//at = value of character
cout<<s.at(1);    //E
}

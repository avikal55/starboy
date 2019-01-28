#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{

string s,temp;
ofstream fout;
fout.open("file.txt");

cout<<"enter a text: "; 
getline(cin,s);

fout<<s;


fout.close();

ifstream fin;
fin.open("file.txt");

int a=0,d=0,sp=0;

while(!fin.eof())
{
temp=fin.get();
cout<<temp;

if((temp>="a" && temp<="z") || (temp>="A" && temp<="Z"))
a++;

else if(temp>="0" && temp<="9")
d++;

else if(temp==" ")
sp++;

}

cout<<"\n\nalphabet count: "<<a;
cout<<"\ndigit count: "<<d;
cout<<"\nspace count: "<<sp<<endl;
}

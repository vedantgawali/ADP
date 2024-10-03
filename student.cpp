#include<iostream>
using namespace std;
class student{
private:
string name;
int rollnumber;
float marks;
public:
void inputdetails()
{
cout<<"enter student name:";
cin>>name;
cout<<"enter rollnumber:";
cin>>rollnumber;
cout<<"enter marks";
cin>> marks;
}
void displaydetails()
{
cout<<"\n student details:\n";
cout<<"name:"<<name<<endl;
cout<<"roll number:"<<rollnumber<<endl;
cout<<"marks:"<<marks<<endl;
}
};
int main()
{
  student student1,student2;
cout<<"enter details the first student \n";
student1.inputdetails();
cout<<"\n enter details for the second student:\n";
student2.inputdetails();
cout<<"\n details of the first student:";
student1.displaydetails();
cout<<"\n details of the second  student:";
student2.displaydetails();
return 0;
}













































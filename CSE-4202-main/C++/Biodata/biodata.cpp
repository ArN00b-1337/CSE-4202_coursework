#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

class personnel {
public:
  string name;
  string address;
  string email;
  string birth;

public:
void getinfo()
{
  cout << "Enter Name    : ";
  getline(cin, name);
  cout << "Enter Address : ";
  getline(cin, address);
  cout << "Enter Email   : ";
  getline(cin, email);
  cout << "Enter Birth-date (DD/MM/YYYY) : ";
  getline(cin, birth);
}

void showinfo()
{
  cout << "\n    ----- Personnel Information -----\n";
  cout << "Name    : " << name << endl;
  cout << "Address : " << address << endl;
  cout << "Email   : " << email << endl;
  cout << "Birth-date (DD/MM/YYYY) : " << birth << endl;
}
};

class academic
{
public:
  int class10;
  int class12;
  string classObtained;

public:
  void getnum()
{
  cout << "Enter class 10 marks: ";
  cin >> class10;
  cout << "Enter class 12 marks: ";
  cin >> class12;
  cout << "Enter class obtained: ";
  cin.ignore();
  getline(cin, classObtained);
}
  void shownum()
{
  cout << "\n    ----- Academic Information -----\n";
  cout << "Class 10 marks: " << class10 << endl;
  cout << "Class 12 marks: " << class12 << endl;
  cout << "Class Obtained: " << classObtained << endl;
}
};

class biodata:
  public personnel,
  public academic
{
  public:
    void showdata()
    {
      cout << "\n============== Student Biodata ==============\n";
      showinfo();
      shownum();
      cout << "\n=============================================\n";
    }
};

int main(){
biodata student;
student.getinfo();
student.getnum();
student.showdata();
getch();
return 0;
}

#define MAX 1000
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main()
{
    int i,n;
    cout<<"Vavedete broia na studentite v grupata:";
    cin>>n;
    string first_name, last_name;
    string egn;
    string fac_number;
    int Count=0;
    float ocenki[10];
    Student* student=new Student[MAX];
    for(int c=0;c<n;c++)
    {
        cout<<"Vavedete sobstvenoto ime:";
        cin>>first_name;
        cout<<"Vavedete familnoto ime:";
        cin>>last_name;
        cout<<"Vavedete EGN:";
        cin>>egn;
        cout<<"Vavedete fakultetnia nomer:";
        cin>>fac_number;
        cout<<"Vavedete deset ocenki:";
        for(i=0;i<10;i++)
        {
            cin>>ocenki[i];
        }
        student[c].set_Fname(first_name);
        student[c].set_Lname(last_name);
        student[c].set_Egn(egn);
        student[c].set_Fn(fac_number);
        student[c].set_Ocenki(ocenki);
    }
    cout<<endl<<endl;
    for(int d=0;d<n;d++)
    {
        student[d].print();
        cout<<endl;
        Count+=student[d].count_men_old();
        cout<<endl;
    }
    cout<<Count<<endl;
    delete student;
    return 0;
}

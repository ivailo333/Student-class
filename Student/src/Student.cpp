#include <string>
#include <iostream>
#include "Student.h"
using namespace std;

Student::Student()
{
    this->fname="";
    this->lname="";
    this->egn="0000000000";
    this->fn="000000";
    for(int k=0;k<10;k++)
    {
        this->ocenki[k]=0.00;
    }
}

void Student::set_Fname(string first_name)
{
    this->fname=first_name;
}

void Student::set_Lname(string last_name)
{
    this->lname=last_name;
}

void Student::set_Egn(string EGN)
{
    string Egn="";
    for(int i=0;i<11;i++)
    {
        Egn+=EGN.substr(i,1);
    }
    this->egn=Egn;
}

void Student::set_Fn(string FN)
{
    string Fn="";
    for(int j=0;j<7;j++)
    {
        Fn+=FN.substr(j,1);
    }
    this->fn=Fn;
}

void Student::set_Ocenki(float OCENKI[10])
{
    for(int k=0;k<10;k++)
    {
        this->ocenki[k]=OCENKI[k];
    }
}

string Student::get_Fname() const
{
    return this->fname;
}

string Student::get_Lname() const
{
    return this->lname;
}

string Student::get_Egn() const
{
    return this->egn;
}

string Student::get_Fn() const
{
    return this->fn;
}

const float* Student::get_Ocenki() const
{
    return this->ocenki;
}

void Student::print() const
{
    int counter;
    string name_first, name_last, number_egn, number_fn;
    name_first=this->get_Fname();
    name_last=this->get_Lname();
    number_egn=this->get_Egn();
    number_fn=this->get_Fn();
    const float* assessments=this->get_Ocenki();
    cout<<name_first<<endl;
    cout<<name_last<<endl;
    cout<<number_egn<<endl;
    cout<<number_fn<<endl;
    for(counter=0;counter<10;counter++)
    {
        cout<<assessments[counter]<<endl;
    }
}

bool Student::check_men_old(string lname,string fac_number)
{
    bool is_men_old=false;
    int year_now=2020;
    int yyyy,age;
    bool odd;
    bool isMale;
    string men_student;
    string birth_year=this->egn.substr(0,2);
    string birth_month=this->egn.substr(2,2);
    string pol=this->egn.substr(8,1);
    int year=stoi(birth_year);
    int month=stoi(birth_month);
    int sex=stoi(pol);
    if((month>=41)&&(month<=52))
    {
        yyyy=2000+year;
    }
    else if((month>=21)&&(month<=32))
    {
        yyyy=1900-year;
    }
    else
    {
        yyyy=1900+year;
    }
    age=year_now-yyyy;
    cout<<age<<endl;
    odd=sex%2;
    if(odd==true)
    {
        isMale=false;
    }
    else
    {
        isMale=true;
    }
    if((isMale==true)&&(age>=19))
    {
        is_men_old=true;
    }
    return is_men_old;
}
int Student::count_men_old()
{
    int counter=0;
    bool men_old;
    men_old=this->check_men_old();
    if(men_old==true)
    {
        counter+=1;
    }
    return counter;
}

void Student::create_array(int n)
{
    const int max_size=100;
    bool men_old;
    men_old=this->check_men_old();
    string* students_men=new string[max_size];
    for(int i=0;i<n;i++)
    {
        students_men[i]=
    }
}

Student::~Student()
{

}

#ifndef STUDENT_H
#define STUDENT_H
using namespace std;

class Student
{
    public:
        Student();
		void set_Fname(string);
		void set_Lname(string);
		void set_Egn(string);
		void set_Fn(string);
		void set_Ocenki(float[]);
		string get_Fname() const;
		string get_Lname() const;
		string get_Egn() const;
		string get_Fn() const;
		const float* get_Ocenki() const;
		void print() const;
		bool check_men_old(string,string);
		int count_men_old();
		void create_array(int);
		~Student();
    private:
        string fname;
		string lname;
		string egn;
		string fn;
		float ocenki[10];
};

#endif // STUDENT_H

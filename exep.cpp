#include <iostream>
using namespace std;

class Person
{
public:
	Person(string name, int id)
	{
		this->name = name;
		this->id = id;
	}
	virtual void print_info() // print name, ID
	{
		cout << name << endl;
		cout << id << endl;
	}
	virtual ~Person() {};
private:
	string name; int id;
};

class Student : public Person
{
public:
	Student(string name, int id, int major, double gpa) : Person(name,id)
	{
        this->major = major;
		this->gpa = gpa;
	}
	void print_info() // print major too
	{
		cout << major << endl;
		cout << gpa << endl;
	}
private:
	int major; double gpa;
};

class Faculty : public Person
{
public:
	Faculty(string name, int id, bool tenure) : Person(name,id)
    {
		this->tenure = tenure;
    }
	void print_info() // print tenured
	{
		cout << tenure << endl;
	}
private:
	bool tenure;
};

/*
int main()
{
	Person *p  = new Person("Pain",123);
	Student *s = new Student("Hoe",2,5,1.9);
	Faculty *f = new Faculty("Ken",3,0);

	Person *q;
	q = p;	q->print_info();
	q = s; 	q->print_info();
	q = f; 	q->print_info();
}*/

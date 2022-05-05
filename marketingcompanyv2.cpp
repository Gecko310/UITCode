#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Person {
protected:
	string name;
	float Sum;
public:
	static int SumAmount;
	static  int SumDays;
	Person() {
		name = "";
		Sum = 0;
	}
	virtual void input() {
		cin >> name;
	}
	virtual void output() {
		cout << name << ": ";
	}
	virtual void sumSalary() = 0;
};
int Person::SumAmount = 0;
int Person::SumDays = 0;
class Worker : public Person {
	float salary;
	int amount;
public:
	Worker() :Person() {
		salary = 0;
		amount = 0;
	}
	void input() {
		Person::input();
		cin >> salary >> amount;
		SumAmount += amount;
	}
	void output() {
		Person::output();
		cout << Sum << endl;
	}
	void sumSalary() {
		Sum = salary + amount * 5;
	}
};
class Officer : public Person {
	int days;
public:
	Officer(): Person() {
		days = 0;
	}
	void input() {
		Person::input();
		cin >> days;
		SumDays += days;
	}
	void output() {
		Person::output();
		cout << Sum << endl;
	}
	void sumSalary() {
		Sum = days * 100;
	}
};
class Manager : public Person {
	
public:
	void input() {
		Person::input();
	}
	void output() {
		Person::output();
		cout << Sum << endl;
	}
	void sumSalary() {
		Sum = 100 + SumAmount * 2 + SumDays * 40;
	}
};
class Company {
	vector<Person *> NV;
public:
	void input() {
		int n;
		cin >> n;
		int type;
		Person* nv = NULL;
		for (int i = 0; i < n; i++) {
			cin >> type;
			if (type == 1) nv = new Worker;
			else if (type == 2) nv = new Officer;
			else if (type == 3) nv = new Manager;
			nv->input();
			NV.push_back(nv);
		}
	}
	void sumSalary() {
		for (int i = 0; i < NV.size(); i++) {
			NV.at(i)->sumSalary();
		}
	}
	void output() {
		for (int i = 0; i < NV.size(); i++) {
			NV.at(i)->output();
		}
	}
};
int main() {
	Company A;
	A.input();
	A.sumSalary();
	A.output();
	return 0;
}

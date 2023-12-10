#include <iostream>
using namespace std;

class employee
{
public:
	string name;
	string email;
	int age;
	float salary;
	string phone_number;
	string address;
	
	void creat(employee emp) {
		string name = emp.name;
		string email = emp.email;
		int age = emp.age;
		float salary = emp.salary;
		string phone_number = emp.phone_number;
		string address = emp.address;
		cout << "employee record is created\n";
	}
	void update(employee emp) {
		string new_name = emp.name;
		string new_email = emp.email;
		int new_age = emp.age;
		float new_salary = emp.salary;
		string new_phone_number = emp.phone_number;
		string new_address = emp.address;
		cout << "employee record is updated\n";
	}
	void show_all(employee emp) {
		cout << "Name : " << emp.name << endl;
		cout << "Email : " << emp.email << endl;
		cout << "age : " << emp.age << endl;
		cout << "salary : " << emp.salary << endl;
		cout << "phone number : " << emp.phone_number << endl;
		cout << "address : " << emp.address << endl;
	}
};


int main()
{
	employee e;
	e.name = "Nour";
	e.age = 44;
	e.salary = 56.09;
	e.creat(e);
	e.salary = 220.22;
	e.update(e);
	e.show_all(e);

}
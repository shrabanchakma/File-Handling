#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int id;
    string firstName;
    string lastName;
    int salary;

public:
    Employee(int id, string FirstName, string lastName, int salary) : id(id), firstName(firstName), lastName(lastName), salary(salary) {}

    int getId()
    {
        return id;
    }
    string getFirstName()
    {
        return firstName;
    }
    string getLastName()
    {
        return lastName;
    }
    string getName()
    {
        return firstName + " " + lastName;
    }
    int getSalary()
    {
        return salary;
    }
    void setSalary(int salary)
    {
        this->salary = salary;
    }
    int getAnnualSalary()
    {
        return salary * 12;
    }
    int raiseSalary(int percent)
    {
        return salary + (salary * percent / 100);
    }
};

int main()
{

    return 0;
}
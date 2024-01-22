#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    string name;
    double payRate;
    const int EMPLOYEE_ID;
    static int nextID;

public:
    const static double STARTING_PAY_RATE;
    Employee(string name) : name(name), payRate(STARTING_PAY_RATE), EMPLOYEE_ID(nextID++){};
    Employee(string name, double payRate) : name(name), payRate(payRate), EMPLOYEE_ID(nextID++){};
    string getName()
    {
        return name;
    };
    int getEmployeeID()
    {
        return EMPLOYEE_ID;
    }
    double getPayRate()
    {
        return payRate;
    }
    void changeName(string name)
    {
        this->name = name;
    }
    void changePayRate(double payRate)
    {
        this->payRate = payRate;
    }
    int getNextID()
    {
        return nextID;
    }
};

const double Employee::STARTING_PAY_RATE = 10;
int Employee::nextID = 444;

int main()
{
    Employee firstEmployee("shraban");
    cout << firstEmployee.getName();
    return 0;
}
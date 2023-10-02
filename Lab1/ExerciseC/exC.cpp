/*
* File Name: exC.cpp
* Assignment: Lab 1 Exercise C
* Completed by: Dominic Choi 30109955, Nathan Ante 30157706
* Submission Date: Sept 20, 2023
*/

#include <string>
#include <vector>
using namespace std;

class Employee {
    private:
        string name;
        string address;
        string dateOfBirth;

    public:
        Employee(const string& name, const string& address, const string& dateOfBirth): 
            name(name), address(address), dateOfBirth(dateOfBirth){}
};

class Customer {
    private:
        string name;
        string address;
        string phone;

    public:
        Customer(const string& name, const string& address, const string& phone): 
            name(name), address(address), phone(phone){}
};

class Company {
    private:
        string companyName;
        string companyAddress;
        string dateEstablished;
        vector<Employee> employees;
        vector<string> employeeState;
        vector<Customer> customers;

    public:
        Company(const string& name, const string& address, const string& dateEstablished):
            companyName(name), companyAddress(address), dateEstablished(dateEstablished){}

        void addEmployee(const string& name, const string& address, const string& dateOfBirth){
            employees.emplace_back(name, address, dateOfBirth);
        }

        void addCustomer(const string& name, const string& address, const string& phone){
            customers.emplace_back(name, address, phone);
        }
};

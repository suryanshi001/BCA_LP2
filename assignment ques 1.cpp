#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
    string Name;
    int Age;
    string City;
    int academic_fee;

public:
    void get() {
        cout << "Enter Name: ";
        cin >> Name;
        cout << "Enter Age: ";
        cin >> Age;
        cout << "Enter City: ";
        cin >> City;
        cout << "Enter Academic Fee: ";
        cin >> academic_fee;
    }

    void display() const {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "City: " << City << endl;
        cout << "Academic Fee: " << academic_fee << endl;
    }
};

class Transport : public Student {
private:
    int route;
    int bus_fee;

public:
    void TransportDetails() {
        cout << "Enter Route: ";
        cin >> route;
        cout << "Enter Bus Fee: ";
        cin >> bus_fee;
    }

    void show() const {
        display(); 
        cout << "Route: " << route << endl;
        cout << "Bus Fee: " << bus_fee << endl;
    }
};

int main() {
    Transport student1;
    student1.get();
    student1.TransportDetails();
    cout << "\nStudent Details:\n";
    student1.show();

    return 0;
}

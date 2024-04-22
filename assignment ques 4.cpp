#include <iostream>

using namespace std;

class BCA_OOPS {
private:
    int var1;
    int var2;
    int var3;

public:
    BCA_OOPS() {
        var1 = 20;
        var2 = 90;
        var3 = 30;
    }
    BCA_OOPS(int v1, int v2, int v3) {
        var1 = v1;
        var2 = v2;
        var3 = v3;
    }

    void get_values(int v1, int v2, int v3) {
        this->var1 = v1;
        this->var2 = v2;
        this->var3 = v3;
    }

    void copy_data(BCA_OOPS& obj) {
        this->var1 = obj.var1;
        this->var2 = obj.var2;
        this->var3 = obj.var3;
    }

    void decrement_values() {
        if (var1 >= 0 && var1 <= 10) {
            var1 -= 2;
        } else if (var1 > 10) {
            var1 -= 5;
        }

        if (var2 >= 0 && var2 <= 10) {
            var2 -= 2;
        } else if (var2 > 10) {
            var2 -= 5;
        }

        if (var3 >= 0 && var3 <= 10) {
            var3 -= 2;
        } else if (var3 > 10) {
            var3 -= 5;
        }
    }

    friend void display(BCA_OOPS& obj);
};

void display(BCA_OOPS& obj) {
    cout << "var1: " << obj.var1 << endl;
    cout << "var2: " << obj.var2 << endl;
    cout << "var3: " << obj.var3 << endl;
}

int main() {

    BCA_OOPS obj1;
    BCA_OOPS obj2(10, 20, 30);

    cout << "Object 1 data:" << endl;
    display(obj1);

    cout << "\nObject 2 data:" << endl;
    display(obj2);

    obj1.get_values(40,50,60);

    cout<<"\nObject 1 data after a change:" << endl;
    display(obj1);


    obj1.copy_data(obj2);

    cout << "\nAfter copying data from Object 2 to Object 1:" << endl;
    display(obj1);

    obj1.decrement_values();
    obj2.decrement_values();

    cout << "\nAfter decrementing values:" << endl;
    cout << "Object 1 data:" << endl;
    display(obj1);

    cout << "\nObject 2 data:" << endl;
    display(obj2);

    return 0;
}

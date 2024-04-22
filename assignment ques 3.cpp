#include <iostream>

using namespace std;

class Test {
private:
    int a;
    int b;
    int c;

public:

    void get_data(int v1) {
        a = v1;
        b = 0;   
        c = 0;
    }

    void get_data(int v1, int v2) {
        a = v1;
        b = v2;
        c = 0;   
    }

    void get_data(int v1, int v2, int v3) {
        a = v1;
        b = v2;
        c = v3;
    }

    void show_data() const {
        cout << "var1: " << a << endl;
        cout << "var2: " << b << endl;
        cout << "var3: " << c << endl;
    }
};

int main() {
    Test obj1, obj2, obj3;

    obj1.get_data(50);

    obj2.get_data(90, 70);

    obj3.get_data(45, 100, 30);

    cout << "Object 1 data:" << endl;
    obj1.show_data();

    cout << "\nObject 2 data:" << endl;
    obj2.show_data();

    cout << "\nObject 3 data:" << endl;
    obj3.show_data();

    return 0;
}

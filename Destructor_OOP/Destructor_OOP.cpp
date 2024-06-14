#include <iostream>
using namespace std;

class clsPerson {
public:
    string FullName;

    // This is the constructor that will be called when the object is created.
    clsPerson() {
        FullName = "Mohammed Al-Momany";
        cout << "\nHi, I'm Constructor";
    }

    // This is the destructor that will be called when the object is destroyed.
    ~clsPerson() {
        cout << "\nHi, I'm Destructor";
    }
};

void Fun1() {
    clsPerson Person1;
    // After exiting from this function, Person1 will be destroyed and the destructor will be called.
}

void Fun2() {
    clsPerson* Person2 = new clsPerson;
    // Always use delete whenever you use new, otherwise the object will remain in memory (memory leak).
    delete Person2;
}

int main() {
    Fun1();
    Fun2();

    system("pause>0");
    return 0;
}

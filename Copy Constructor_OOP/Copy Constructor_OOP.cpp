#include <iostream>
using namespace std;

class clsAddress {
private:
    string _AddressLine1;
    string _AddressLine2;
    string _POBox;
    string _ZipCode;

public:
    // Constructor
    clsAddress(string AddressLine1, string AddressLine2, string POBox, string ZipCode) {
        _AddressLine1 = AddressLine1;
        _AddressLine2 = AddressLine2;
        _POBox = POBox;
        _ZipCode = ZipCode;
    }

    // Copy Constructor
    clsAddress(const clsAddress& old_obj) {
        _AddressLine1 = old_obj.AddressLine1();
        _AddressLine2 = old_obj.AddressLine2();
        _POBox = old_obj.POBox();
        _ZipCode = old_obj.ZipCode();
    }

    // Setters
    void SetAddressLine1(string AddressLine1) {
        _AddressLine1 = AddressLine1;
    }

    void SetAddressLine2(string AddressLine2) {
        _AddressLine2 = AddressLine2;
    }

    void SetPOBox(string POBox) {
        _POBox = POBox;
    }

    void SetZipCode(string ZipCode) {
        _ZipCode = ZipCode;
    }

    // Getters
    string AddressLine1() const {
        return _AddressLine1;
    }

    string AddressLine2() const {
        return _AddressLine2;
    }

    string POBox() const {
        return _POBox;
    }

    string ZipCode() const {
        return _ZipCode;
    }

    // Print method
    void Print() const {
        cout << "\nAddress Details:\n";
        cout << "------------------------";
        cout << "\nAddressLine1: " << _AddressLine1 << endl;
        cout << "AddressLine2: " << _AddressLine2 << endl;
        cout << "POBox       : " << _POBox << endl;
        cout << "ZipCode     : " << _ZipCode << endl;
    }
};

int main() {
    clsAddress Address1("Queen Alia Street", "B 303", "23252", "11111");
    Address1.Print();

    clsAddress Address2 = Address1;
    Address2.Print();

    return 0;
}

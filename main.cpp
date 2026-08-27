#include <iostream>
#include "diamond_problem.h"

using namespace std;

int main() {
    cout << "========================================" << endl;
    cout << "  Diamond Problem & Virtual Inheritance" << endl;
    cout << "========================================\n" << endl;

    // Create an instance of Derived
    Derived obj;

    cout << "--- Method Calls ---" << endl;
    obj.displayBase();    // Calls Base method
    obj.displayLeft();    // Calls Left method
    obj.displayRight();   // Calls Right method
    obj.displayDerived(); // Calls Derived method
    
    cout << "\n--- Value from Base Class ---" << endl;
    obj.showValue();      // Shows value from Base
    
    cout << "\n--- Accessing Members ---" << endl;
    cout << "Value in object: " << obj.getValue() << endl;
    
    cout << "\n--- Pointer/Reference Polymorphism ---" << endl;
    Base* basePtr = &obj;
    cout << "Through Base pointer - Value: " << basePtr->getValue() << endl;
    basePtr->displayBase();
    
    cout << "\n--- Object Size ---" << endl;
    cout << "Size of Base: " << sizeof(Base) << " bytes" << endl;
    cout << "Size of Left: " << sizeof(Left) << " bytes" << endl;
    cout << "Size of Right: " << sizeof(Right) << " bytes" << endl;
    cout << "Size of Derived: " << sizeof(Derived) << " bytes" << endl;
    
    cout << "\n========================================" << endl;
    
    return 0;
}

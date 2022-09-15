#include <iostream>
using std::cout;
using std::endl;
 
/***** Function Template illustration *****/
// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded
template <typename T>
T myMax(T x, T y) {
    return (x > y) ? x: y;
}

/***** Class Template illustration *****/
template <class T>
class Number {
private:
    T num_;
public:
    Number(T n) : num_{n} {}

    // --> You need to replace these with macro in your exercise
    T get_num() const {
        return num_;
    }
    void set_num(T n) {
        num_ = n;
    }
    // <--
};
 
int main() {
    cout << "Function TEMPLATE demo\n";
    cout << myMax<int>(3, 7) << endl;  // Call myMax for int
    cout << myMax<double>(3.0, 7.0) << endl; // call myMax for double
    cout << myMax<char>('g', 'e') << endl;   // call myMax for char

    cout << "Class TEMPLATE demo\n";
    // create object with int type
    Number<int> i_num(7);
    // create object with double type
    Number<double> d_num(7.7);
    cout << "int Number = " << i_num.get_num() << endl;
    cout << "double Number = " << d_num.get_num() << endl;
    
    return 0;
}


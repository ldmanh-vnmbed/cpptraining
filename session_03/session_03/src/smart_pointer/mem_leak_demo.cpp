#include <iostream>

/***
 * You can easily spot the bug in this case.
 * However, image the code is not this short 
 *    and there are too many cases to cover... 
 */

void mem_leak_demo(int x) {
    int* value_ptr = new int;
    *value_ptr = x;

    std::cout << "Int value: " << *value_ptr << "\n";
    if (x == 45) {
        // delete value_ptr;
        return;
    }

    *value_ptr = x + 2;
    if (*value_ptr == 52) {
        // delete value_ptr;
        return;
    }

    delete value_ptr;
    return;
}

int main() {
    std::cout << "Enter main\n";
    mem_leak_demo(22);
    mem_leak_demo(45); // 4 bytes
    mem_leak_demo(50); // 8 bytes

    return 0;
}

#include <iostream>
#include <thread>

void print_character(int n, char c) {
    // consider std::cout as a shared resource
    for (int i=0; i<n; ++i) {
        std::cout << c;
    }
    std::cout << std::endl;
}

int main() {
    // create a thread to execute `print_character()`
    std::thread thread_1 {print_character, 50, '@'};
    std::thread thread_2 {print_character, 50, '#'};

    // wait for thread execution to finish
    thread_1.join();
    thread_2.join();

    return 0;
}

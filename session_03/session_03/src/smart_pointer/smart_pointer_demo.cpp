#include <iostream>
#include <memory>

/* example 1 */
void smart_pointer_demo(int x) {
    std::shared_ptr<int> value_ptr = std::make_shared<int>();
    *value_ptr = x;

    std::cout << "Int value: " << *value_ptr << "\n";
    if (x == 45) {
        return;
    }

    *value_ptr = x + 2;
    if (*value_ptr == 52) {
        return;
    }

    return;
}

/* example 2 */
class Rectangle {
private:
    int length_;
    int breadth_;
public:
    Rectangle(int l, int b) : length_{l}, breadth_{b} {}
    auto area() { return length_ * breadth_; }
};

int main() {
    std::cout << "Enter main\n";
    /* example 1 */
    smart_pointer_demo(22);
    smart_pointer_demo(45); // no more leaks
    smart_pointer_demo(50); // no more leaks

    /* example 2 - illustrate use_count() */
    std::shared_ptr<Rectangle> r1 = std::make_shared<Rectangle>(10, 50);
    std::cout << "Area: " << r1->area() << "\n";
    std::cout << "Count: " << r1.use_count() << "\n";

    {
        std::shared_ptr<Rectangle> r2 = r1;    
        std::cout << "Area: " << r2->area() << "\n";
        std::cout << "Count: " << r2.use_count() << "\n";
    }

    std::cout << "Count: " << r1.use_count() << "\n";

    return 0;
}

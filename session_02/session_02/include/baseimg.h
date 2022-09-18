#include "iostream"

template<class C>
class baseImg {
    private:
        std::string name;
    public:
        void set_name(std::string name);
        std::string get_name();
        std::string open(std::string data_path);
        C open_image(std::string data_path);
};
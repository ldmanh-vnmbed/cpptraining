#include <iostream>

template<class C>
class baseimg {
   private:
    std::string name;
   public:
    void set_name(std::string name);
    std::string get_name();
    bool open(std::string file_path);
};
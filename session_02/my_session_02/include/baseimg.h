#include <iostream>

#include "def.h"

template<class C>
class baseimg {
    set_(std::string, name);
    get_(std::string, name);
   public:
    C open(std::string file_path);
};
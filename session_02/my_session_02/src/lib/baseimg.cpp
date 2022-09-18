#include "baseimg.h"

template<class C>
C baseimg<C>::open(std::string file_path){
    C temp;
    return temp.open_image(file_path);
}

template<class C>
void baseimg<C>::set_name(std::string name){
    this->name = name;
}

template<class C>
std::string baseimg<C>::get_name(){
    return name;
}
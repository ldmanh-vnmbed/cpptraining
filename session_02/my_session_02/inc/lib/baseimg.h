#include <iostream>
#include <filesystem>

#include <png++/png.hpp>
#include "lodepng.h"
template <class C>
class baseimg
{
private:
    std::string name;
    unsigned int height;
    unsigned int widght;

public: 
    void set_name(std::string name);
    std::string get_name();
    void open(std::string file_path);
};

/* Class for PNG++ */
class pngpp_image : public baseimg
{
private:
    
public:
    bool open_image(std::string file_path);
};

/* Class for LodePNG */
class lodepng_image : public baseimg
{
private:
    
public:
    bool open_image(std::string file_path);
};
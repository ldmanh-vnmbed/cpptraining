#include "gtest/gtest.h"
#include "lodepng_image.h"
#include "pngpp_image.h"


#include<iostream>

std::string file_path_0 = "/home/manhld/workspace/cpptraining/session_01/Task_3/data/linux_test.png";
std::string file_path_1 = "/home/manhld/workspace/cpptraining/session_01/Task_3/data/linux_test_1.png";



namespace task_3_gtest{
    TEST(lodepng_test, open_image_test){
        lodepng_image image;
        EXPECT_EQ(1,image.open_image(file_path_0));
        EXPECT_EQ(0,image.open_image(file_path_1));
    }
    TEST(lodepng_test, getInfor){
        {
            lodepng_image image;
            image.open_image(file_path_0);
            EXPECT_EQ(160, image.getH());
            EXPECT_EQ(160, image.getW());
        }
        {
            lodepng_image image;
            image.open_image(file_path_1);
            EXPECT_EQ(0, image.getH());
            EXPECT_EQ(0, image.getW());
        }
    }
    TEST(pngpp_test, open_image_test){
        pngpp_image image;
        EXPECT_EQ(1,image.open_image(file_path_0));
        EXPECT_EQ(0,image.open_image(file_path_1));
    }
    TEST(pngpp_test, getInfor){
        {
            pngpp_image image;
            image.open_image(file_path_0);
            EXPECT_EQ(160, image.getH());
            EXPECT_EQ(160, image.getW());
        }
        {
            pngpp_image image;
            image.open_image(file_path_1);
            EXPECT_EQ(0, image.getH());
            EXPECT_EQ(0, image.getW());
        }
    }
}

int main(){
    testing::InitGoogleTest();
    std::cout << "RUN ALL TEST\n";
    int status = RUN_ALL_TESTS();
    return status;
}
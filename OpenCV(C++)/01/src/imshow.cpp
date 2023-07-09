#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char **argv)
{
    if(argc < 2){
        std::cerr << "please file path. ./imshow [filepath]" << std::endl;
        return EXIT_FAILURE;
    }
    cv::Mat image = cv::imread(argv[1]);

    cv::imshow("image", image);
    cv::waitKey(0);
}
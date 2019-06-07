#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char** argv){

    Mat image , blurredImage;

    image = imread(argv[1], CV_LOAD_IMAGE_COLOR);


    if(!image.data){
        cout<<"Error loading image" << "\n";
        return -1;
    }


    GaussianBlur( image, blurredImage, Size( 5, 5 ), 1.0);

    imwrite("output.jpg",blurredImage);


    
    return 0;
}

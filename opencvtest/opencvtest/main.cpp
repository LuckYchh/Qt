#include <QCoreApplication>
#include <opencv2/opencv.hpp>
#include <stdio.h>

using namespace cv;

int main()
{
    Mat src=imread("/home/chh001/img/3.jpg");
    if(src.empty())
    {
        printf("can not find the image\n");
        return -1;
    }
    printf("read image success\n");
    imshow("SRC",src);

    waitKey(0);
    return 0;

}

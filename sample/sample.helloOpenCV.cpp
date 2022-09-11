/*
 * @Description: 
 * @Version: 1.0
 * @Autor: like
 * @Date: 2022-07-31 11:49:02
 * @LastEditors: like
 * @LastEditTime: 2022-09-11 09:13:17
 */
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <stdio.h>

#define DISPLAY_MAT(mat) cv::imshow(#mat, mat)
using namespace cv;

int main()
{
    Mat mat = imread("1.bmp");
    printf("%d, %d", mat.cols, mat.rows);
    DISPLAY_MAT(mat);
    waitKey(0);
    return 0;
}
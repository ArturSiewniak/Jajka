#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main()
{
	/*//Basic test
	Mat img = imread("kontur.bmp");
	namedWindow("image", WINDOW_NORMAL);
	imshow("image", img);
	waitKey(0);
	*/

	Mat inputImage = imread("og.bmp");
	Mat contours;
	Mat gray_image;
	
	cvtColor(inputImage, gray_image, COLOR_RGB2GRAY);

	Canny(inputImage, contours, 35, 90);

	namedWindow("Image");
	imshow("Image", inputImage);

	namedWindow("Gray");
	imshow("Gray", gray_image);

	namedWindow("Canny");
	imshow("Canny", contours);

	waitKey(0);

	return 0;
}
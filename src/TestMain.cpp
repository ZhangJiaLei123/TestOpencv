#include<opencv2/opencv.hpp>

#include<iostream>

using namespace cv;
// Í¼Æ¬×ÊÔ´Â·¾¶
#define RES_PATH "E:/Documents/workspace/C_Plus/c_openCv/res"

int main(int argc, char** argv) {

	String strPath = RES_PATH;
	strPath += "/image/opencv-test.png";

	Mat image = imread(strPath);

	if (image.empty()) {
		
		printf("could not load image...\n");

		return -1;

	}
	//namedWindow("test_opencv_setup", 0);
	imshow("opencv²âÊÔ", image);

	waitKey(0);

	return 0;
}


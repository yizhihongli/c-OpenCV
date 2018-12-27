#include <opencv2\opencv.hpp>
#include <iostream>

using namespace cv;
int main() {
/*
IMREAD_UNCHANGED  || <0     原图
IMREAD_GRAYSCALE  || =0     灰度图
IMREAD_COLOR RGB  || >0     加载
*/
	//Mat src = imread("1.png", 0);//注意是 /  用 \ 会找不到图片
	 Mat src = imread("1.png", IMREAD_GRAYSCALE);//与上面0一样
	namedWindow("1", WINDOW_AUTOSIZE);
	imshow("1", src);
	waitKey();
	return 0;
}

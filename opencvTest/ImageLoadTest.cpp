#include "stdafx.h"
#include "ImageLoadTest.h"

#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace cv;
using namespace std;

ImageLoadTest::ImageLoadTest()
{
}

int ImageLoadTest::Run()
{
	string filename = "mypic.JPG";
	Mat img = imread(filename, CV_LOAD_IMAGE_UNCHANGED); //read the image data in the file "MyPic.JPG" and store it in 'img'

	if (img.empty()) //check whether the image is loaded or not
	{

		cout << "Error : Image cannot be loaded..!!" + filename << endl;
		//system("pause"); //wait for a key press
		return -1;
	}

	namedWindow("MyWindow", CV_WINDOW_AUTOSIZE); //create a window with the name "MyWindow"
	imshow("MyWindow", img); //display the image which is stored in the 'img' in the "MyWindow" window

	waitKey(0); //wait infinite time for a keypress

	destroyWindow("MyWindow"); //destroy the window with the name, "MyWindow"

	return 0;
}


ImageLoadTest::~ImageLoadTest()
{
}

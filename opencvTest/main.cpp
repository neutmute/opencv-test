#include "stdafx.h"


#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include "ImageLoadTest.h"
#include "VideoFileTest.h"
#include "WebcamTest.cpp"
#include "Test4ImageWrite.h"

using namespace cv;
using namespace std;

int main(int argc, const char** argv)
{
	/*
	ImageLoadTest imageLoad;
	return imageLoad.Run();

	VideoFileTest videoLoad;
	return videoLoad.Run();
	
	WebcamTest webcamTest;
	return webcamTest.Run();
	*/

	Test4ImageWrite imageWrite;
	imageWrite.Run();
}
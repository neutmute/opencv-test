#include "stdafx.h"


#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include "ImageLoadTest.h"
#include "VideoFileTest.h"

using namespace cv;
using namespace std;

int main(int argc, const char** argv)
{
	/*VideoFileTest videoLoad;
	return videoLoad.Run();*/

	ImageLoadTest imageLoad;
	return imageLoad.Run();

}
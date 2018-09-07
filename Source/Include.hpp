
#pragma once
#define __STDC_CONSTANT_MACROS
extern "C"
{
    #include <libavutil/avutil.h>
    #include <libavutil/imgutils.h>
    #include <libavutil/opt.h>
    #include <libavformat/avformat.h>
    #include <libavcodec/avcodec.h>
    #include <libswscale/swscale.h>
    #include <libswresample/swresample.h>
}
#include <switch.h>
#include <string>
#include <fstream>
#include <vector>
#include <iostream>
using namespace std;
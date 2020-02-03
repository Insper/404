//
// This file is auto-generated. Please don't modify it!
//

#undef LOG_TAG

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_PLOT

#include <string>

#include "opencv2/plot.hpp"

#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/plot/include/opencv2/plot.hpp"

#define LOG_TAG "org.opencv.plot"
#include "common.h"

using namespace cv;

/// throw java exception
#undef throwJavaException
#define throwJavaException throwJavaException_plot
static void throwJavaException(JNIEnv *env, const std::exception *e, const char *method) {
  std::string what = "unknown exception";
  jclass je = 0;

  if(e) {
    std::string exception_type = "std::exception";

    if(dynamic_cast<const cv::Exception*>(e)) {
      exception_type = "cv::Exception";
      je = env->FindClass("org/opencv/core/CvException");
    }

    what = exception_type + ": " + e->what();
  }

  if(!je) je = env->FindClass("java/lang/Exception");
  env->ThrowNew(je, what.c_str());

  LOGE("%s caught %s", method, what.c_str());
  (void)method;        // avoid "unused" warning
}

extern "C" {


//
// static Ptr_Plot2d cv::plot::Plot2d::create(Mat data)
//

using namespace cv::plot;

JNIEXPORT jlong JNICALL Java_org_opencv_plot_Plot2d_create_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_plot_Plot2d_create_10
  (JNIEnv* env, jclass , jlong data_nativeObj)
{
    static const char method_name[] = "plot::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::plot::Plot2d> Ptr_Plot2d;
        Mat& data = *((Mat*)data_nativeObj);
        Ptr_Plot2d _retval_ = cv::plot::Plot2d::create( data );
        return (jlong)(new Ptr_Plot2d(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_Plot2d cv::plot::Plot2d::create(Mat dataX, Mat dataY)
//

using namespace cv::plot;

JNIEXPORT jlong JNICALL Java_org_opencv_plot_Plot2d_create_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_plot_Plot2d_create_11
  (JNIEnv* env, jclass , jlong dataX_nativeObj, jlong dataY_nativeObj)
{
    static const char method_name[] = "plot::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::plot::Plot2d> Ptr_Plot2d;
        Mat& dataX = *((Mat*)dataX_nativeObj);
        Mat& dataY = *((Mat*)dataY_nativeObj);
        Ptr_Plot2d _retval_ = cv::plot::Plot2d::create( dataX, dataY );
        return (jlong)(new Ptr_Plot2d(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::plot::Plot2d::render(Mat& _plotResult)
//

using namespace cv::plot;

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_render_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_render_10
  (JNIEnv* env, jclass , jlong self, jlong _plotResult_nativeObj)
{
    static const char method_name[] = "plot::render_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::plot::Plot2d>* me = (Ptr<cv::plot::Plot2d>*) self; //TODO: check for NULL
        Mat& _plotResult = *((Mat*)_plotResult_nativeObj);
        (*me)->render( _plotResult );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::plot::Plot2d::setGridLinesNumber(int gridLinesNumber)
//

using namespace cv::plot;

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setGridLinesNumber_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setGridLinesNumber_10
  (JNIEnv* env, jclass , jlong self, jint gridLinesNumber)
{
    static const char method_name[] = "plot::setGridLinesNumber_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::plot::Plot2d>* me = (Ptr<cv::plot::Plot2d>*) self; //TODO: check for NULL
        (*me)->setGridLinesNumber( (int)gridLinesNumber );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::plot::Plot2d::setInvertOrientation(bool _invertOrientation)
//

using namespace cv::plot;

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setInvertOrientation_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setInvertOrientation_10
  (JNIEnv* env, jclass , jlong self, jboolean _invertOrientation)
{
    static const char method_name[] = "plot::setInvertOrientation_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::plot::Plot2d>* me = (Ptr<cv::plot::Plot2d>*) self; //TODO: check for NULL
        (*me)->setInvertOrientation( (bool)_invertOrientation );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::plot::Plot2d::setMaxX(double _plotMaxX)
//

using namespace cv::plot;

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setMaxX_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setMaxX_10
  (JNIEnv* env, jclass , jlong self, jdouble _plotMaxX)
{
    static const char method_name[] = "plot::setMaxX_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::plot::Plot2d>* me = (Ptr<cv::plot::Plot2d>*) self; //TODO: check for NULL
        (*me)->setMaxX( (double)_plotMaxX );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::plot::Plot2d::setMaxY(double _plotMaxY)
//

using namespace cv::plot;

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setMaxY_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setMaxY_10
  (JNIEnv* env, jclass , jlong self, jdouble _plotMaxY)
{
    static const char method_name[] = "plot::setMaxY_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::plot::Plot2d>* me = (Ptr<cv::plot::Plot2d>*) self; //TODO: check for NULL
        (*me)->setMaxY( (double)_plotMaxY );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::plot::Plot2d::setMinX(double _plotMinX)
//

using namespace cv::plot;

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setMinX_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setMinX_10
  (JNIEnv* env, jclass , jlong self, jdouble _plotMinX)
{
    static const char method_name[] = "plot::setMinX_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::plot::Plot2d>* me = (Ptr<cv::plot::Plot2d>*) self; //TODO: check for NULL
        (*me)->setMinX( (double)_plotMinX );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::plot::Plot2d::setMinY(double _plotMinY)
//

using namespace cv::plot;

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setMinY_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setMinY_10
  (JNIEnv* env, jclass , jlong self, jdouble _plotMinY)
{
    static const char method_name[] = "plot::setMinY_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::plot::Plot2d>* me = (Ptr<cv::plot::Plot2d>*) self; //TODO: check for NULL
        (*me)->setMinY( (double)_plotMinY );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::plot::Plot2d::setNeedPlotLine(bool _needPlotLine)
//

using namespace cv::plot;

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setNeedPlotLine_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setNeedPlotLine_10
  (JNIEnv* env, jclass , jlong self, jboolean _needPlotLine)
{
    static const char method_name[] = "plot::setNeedPlotLine_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::plot::Plot2d>* me = (Ptr<cv::plot::Plot2d>*) self; //TODO: check for NULL
        (*me)->setNeedPlotLine( (bool)_needPlotLine );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::plot::Plot2d::setPlotAxisColor(Scalar _plotAxisColor)
//

using namespace cv::plot;

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setPlotAxisColor_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setPlotAxisColor_10
  (JNIEnv* env, jclass , jlong self, jdouble _plotAxisColor_val0, jdouble _plotAxisColor_val1, jdouble _plotAxisColor_val2, jdouble _plotAxisColor_val3)
{
    static const char method_name[] = "plot::setPlotAxisColor_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::plot::Plot2d>* me = (Ptr<cv::plot::Plot2d>*) self; //TODO: check for NULL
        Scalar _plotAxisColor(_plotAxisColor_val0, _plotAxisColor_val1, _plotAxisColor_val2, _plotAxisColor_val3);
        (*me)->setPlotAxisColor( _plotAxisColor );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::plot::Plot2d::setPlotBackgroundColor(Scalar _plotBackgroundColor)
//

using namespace cv::plot;

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setPlotBackgroundColor_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setPlotBackgroundColor_10
  (JNIEnv* env, jclass , jlong self, jdouble _plotBackgroundColor_val0, jdouble _plotBackgroundColor_val1, jdouble _plotBackgroundColor_val2, jdouble _plotBackgroundColor_val3)
{
    static const char method_name[] = "plot::setPlotBackgroundColor_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::plot::Plot2d>* me = (Ptr<cv::plot::Plot2d>*) self; //TODO: check for NULL
        Scalar _plotBackgroundColor(_plotBackgroundColor_val0, _plotBackgroundColor_val1, _plotBackgroundColor_val2, _plotBackgroundColor_val3);
        (*me)->setPlotBackgroundColor( _plotBackgroundColor );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::plot::Plot2d::setPlotGridColor(Scalar _plotGridColor)
//

using namespace cv::plot;

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setPlotGridColor_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setPlotGridColor_10
  (JNIEnv* env, jclass , jlong self, jdouble _plotGridColor_val0, jdouble _plotGridColor_val1, jdouble _plotGridColor_val2, jdouble _plotGridColor_val3)
{
    static const char method_name[] = "plot::setPlotGridColor_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::plot::Plot2d>* me = (Ptr<cv::plot::Plot2d>*) self; //TODO: check for NULL
        Scalar _plotGridColor(_plotGridColor_val0, _plotGridColor_val1, _plotGridColor_val2, _plotGridColor_val3);
        (*me)->setPlotGridColor( _plotGridColor );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::plot::Plot2d::setPlotLineColor(Scalar _plotLineColor)
//

using namespace cv::plot;

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setPlotLineColor_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setPlotLineColor_10
  (JNIEnv* env, jclass , jlong self, jdouble _plotLineColor_val0, jdouble _plotLineColor_val1, jdouble _plotLineColor_val2, jdouble _plotLineColor_val3)
{
    static const char method_name[] = "plot::setPlotLineColor_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::plot::Plot2d>* me = (Ptr<cv::plot::Plot2d>*) self; //TODO: check for NULL
        Scalar _plotLineColor(_plotLineColor_val0, _plotLineColor_val1, _plotLineColor_val2, _plotLineColor_val3);
        (*me)->setPlotLineColor( _plotLineColor );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::plot::Plot2d::setPlotLineWidth(int _plotLineWidth)
//

using namespace cv::plot;

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setPlotLineWidth_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setPlotLineWidth_10
  (JNIEnv* env, jclass , jlong self, jint _plotLineWidth)
{
    static const char method_name[] = "plot::setPlotLineWidth_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::plot::Plot2d>* me = (Ptr<cv::plot::Plot2d>*) self; //TODO: check for NULL
        (*me)->setPlotLineWidth( (int)_plotLineWidth );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::plot::Plot2d::setPlotSize(int _plotSizeWidth, int _plotSizeHeight)
//

using namespace cv::plot;

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setPlotSize_10 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setPlotSize_10
  (JNIEnv* env, jclass , jlong self, jint _plotSizeWidth, jint _plotSizeHeight)
{
    static const char method_name[] = "plot::setPlotSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::plot::Plot2d>* me = (Ptr<cv::plot::Plot2d>*) self; //TODO: check for NULL
        (*me)->setPlotSize( (int)_plotSizeWidth, (int)_plotSizeHeight );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::plot::Plot2d::setPlotTextColor(Scalar _plotTextColor)
//

using namespace cv::plot;

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setPlotTextColor_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setPlotTextColor_10
  (JNIEnv* env, jclass , jlong self, jdouble _plotTextColor_val0, jdouble _plotTextColor_val1, jdouble _plotTextColor_val2, jdouble _plotTextColor_val3)
{
    static const char method_name[] = "plot::setPlotTextColor_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::plot::Plot2d>* me = (Ptr<cv::plot::Plot2d>*) self; //TODO: check for NULL
        Scalar _plotTextColor(_plotTextColor_val0, _plotTextColor_val1, _plotTextColor_val2, _plotTextColor_val3);
        (*me)->setPlotTextColor( _plotTextColor );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::plot::Plot2d::setPointIdxToPrint(int pointIdx)
//

using namespace cv::plot;

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setPointIdxToPrint_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setPointIdxToPrint_10
  (JNIEnv* env, jclass , jlong self, jint pointIdx)
{
    static const char method_name[] = "plot::setPointIdxToPrint_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::plot::Plot2d>* me = (Ptr<cv::plot::Plot2d>*) self; //TODO: check for NULL
        (*me)->setPointIdxToPrint( (int)pointIdx );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::plot::Plot2d::setShowGrid(bool needShowGrid)
//

using namespace cv::plot;

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setShowGrid_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setShowGrid_10
  (JNIEnv* env, jclass , jlong self, jboolean needShowGrid)
{
    static const char method_name[] = "plot::setShowGrid_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::plot::Plot2d>* me = (Ptr<cv::plot::Plot2d>*) self; //TODO: check for NULL
        (*me)->setShowGrid( (bool)needShowGrid );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::plot::Plot2d::setShowText(bool needShowText)
//

using namespace cv::plot;

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setShowText_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_setShowText_10
  (JNIEnv* env, jclass , jlong self, jboolean needShowText)
{
    static const char method_name[] = "plot::setShowText_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::plot::Plot2d>* me = (Ptr<cv::plot::Plot2d>*) self; //TODO: check for NULL
        (*me)->setShowText( (bool)needShowText );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::plot::Plot2d>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_plot_Plot2d_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::plot::Plot2d>*) self;
}



} // extern "C"

#endif // HAVE_OPENCV_PLOT

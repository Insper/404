//
// This file is auto-generated. Please don't modify it!
//

#undef LOG_TAG

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_FACE

#include <string>

#include "opencv2/face.hpp"

#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/face/include/opencv2/face.hpp"
#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/face/include/opencv2/face/predict_collector.hpp"
#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/face/include/opencv2/face/mace.hpp"
#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/face/include/opencv2/face/facemark_train.hpp"
#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/face/include/opencv2/face/facemarkAAM.hpp"
#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/face/include/opencv2/face/face_alignment.hpp"
#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/face/include/opencv2/face/facemark.hpp"
#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/face/include/opencv2/face/bif.hpp"
#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/face/include/opencv2/face/facemarkLBF.hpp"
#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/face/include/opencv2/face/facerec.hpp"

#define LOG_TAG "org.opencv.face"
#include "common.h"

using namespace cv;

/// throw java exception
#undef throwJavaException
#define throwJavaException throwJavaException_face
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
// static Ptr_FisherFaceRecognizer cv::face::FisherFaceRecognizer::create(int num_components = 0, double threshold = DBL_MAX)
//

using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_FisherFaceRecognizer_create_10 (JNIEnv*, jclass, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_face_FisherFaceRecognizer_create_10
  (JNIEnv* env, jclass , jint num_components, jdouble threshold)
{
    static const char method_name[] = "face::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::FisherFaceRecognizer> Ptr_FisherFaceRecognizer;
        Ptr_FisherFaceRecognizer _retval_ = cv::face::FisherFaceRecognizer::create( (int)num_components, (double)threshold );
        return (jlong)(new Ptr_FisherFaceRecognizer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_FisherFaceRecognizer_create_11 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_face_FisherFaceRecognizer_create_11
  (JNIEnv* env, jclass , jint num_components)
{
    static const char method_name[] = "face::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::FisherFaceRecognizer> Ptr_FisherFaceRecognizer;
        Ptr_FisherFaceRecognizer _retval_ = cv::face::FisherFaceRecognizer::create( (int)num_components );
        return (jlong)(new Ptr_FisherFaceRecognizer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_FisherFaceRecognizer_create_12 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_face_FisherFaceRecognizer_create_12
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "face::create_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::FisherFaceRecognizer> Ptr_FisherFaceRecognizer;
        Ptr_FisherFaceRecognizer _retval_ = cv::face::FisherFaceRecognizer::create();
        return (jlong)(new Ptr_FisherFaceRecognizer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::face::FisherFaceRecognizer>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_face_FisherFaceRecognizer_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_FisherFaceRecognizer_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::face::FisherFaceRecognizer>*) self;
}


//
//  native support for java finalize()
//  static void Ptr<cv::face::FacemarkTrain>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_face_FacemarkTrain_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_FacemarkTrain_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::face::FacemarkTrain>*) self;
}


//
// static Ptr_BIF cv::face::BIF::create(int num_bands = 8, int num_rotations = 12)
//

using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_BIF_create_10 (JNIEnv*, jclass, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_face_BIF_create_10
  (JNIEnv* env, jclass , jint num_bands, jint num_rotations)
{
    static const char method_name[] = "face::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::BIF> Ptr_BIF;
        Ptr_BIF _retval_ = cv::face::BIF::create( (int)num_bands, (int)num_rotations );
        return (jlong)(new Ptr_BIF(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_BIF_create_11 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_face_BIF_create_11
  (JNIEnv* env, jclass , jint num_bands)
{
    static const char method_name[] = "face::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::BIF> Ptr_BIF;
        Ptr_BIF _retval_ = cv::face::BIF::create( (int)num_bands );
        return (jlong)(new Ptr_BIF(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_BIF_create_12 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_face_BIF_create_12
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "face::create_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::BIF> Ptr_BIF;
        Ptr_BIF _retval_ = cv::face::BIF::create();
        return (jlong)(new Ptr_BIF(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::face::BIF::getNumBands()
//

using namespace cv::face;

JNIEXPORT jint JNICALL Java_org_opencv_face_BIF_getNumBands_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_face_BIF_getNumBands_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "face::getNumBands_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::BIF>* me = (Ptr<cv::face::BIF>*) self; //TODO: check for NULL
        return (*me)->getNumBands();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::face::BIF::getNumRotations()
//

using namespace cv::face;

JNIEXPORT jint JNICALL Java_org_opencv_face_BIF_getNumRotations_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_face_BIF_getNumRotations_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "face::getNumRotations_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::BIF>* me = (Ptr<cv::face::BIF>*) self; //TODO: check for NULL
        return (*me)->getNumRotations();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::face::BIF::compute(Mat image, Mat& features)
//

using namespace cv::face;

JNIEXPORT void JNICALL Java_org_opencv_face_BIF_compute_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_BIF_compute_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong features_nativeObj)
{
    static const char method_name[] = "face::compute_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::BIF>* me = (Ptr<cv::face::BIF>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& features = *((Mat*)features_nativeObj);
        (*me)->compute( image, features );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::face::BIF>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_face_BIF_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_BIF_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::face::BIF>*) self;
}


//
//  native support for java finalize()
//  static void Ptr<cv::face::FacemarkKazemi>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_face_FacemarkKazemi_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_FacemarkKazemi_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::face::FacemarkKazemi>*) self;
}


//
//  String cv::face::FaceRecognizer::getLabelInfo(int label)
//

using namespace cv::face;

JNIEXPORT jstring JNICALL Java_org_opencv_face_FaceRecognizer_getLabelInfo_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jstring JNICALL Java_org_opencv_face_FaceRecognizer_getLabelInfo_10
  (JNIEnv* env, jclass , jlong self, jint label)
{
    static const char method_name[] = "face::getLabelInfo_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::FaceRecognizer>* me = (Ptr<cv::face::FaceRecognizer>*) self; //TODO: check for NULL
        cv::String _retval_ = (*me)->getLabelInfo( (int)label );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  int cv::face::FaceRecognizer::predict(Mat src)
//

using namespace cv::face;

JNIEXPORT jint JNICALL Java_org_opencv_face_FaceRecognizer_predict_1label_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_face_FaceRecognizer_predict_1label_10
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj)
{
    static const char method_name[] = "face::predict_1label_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::FaceRecognizer>* me = (Ptr<cv::face::FaceRecognizer>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        return (*me)->predict( src );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_int cv::face::FaceRecognizer::getLabelsByString(String str)
//

using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_FaceRecognizer_getLabelsByString_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_face_FaceRecognizer_getLabelsByString_10
  (JNIEnv* env, jclass , jlong self, jstring str)
{
    static const char method_name[] = "face::getLabelsByString_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::FaceRecognizer>* me = (Ptr<cv::face::FaceRecognizer>*) self; //TODO: check for NULL
        const char* utf_str = env->GetStringUTFChars(str, 0); String n_str( utf_str ? utf_str : "" ); env->ReleaseStringUTFChars(str, utf_str);
        std::vector<int> _ret_val_vector_ = (*me)->getLabelsByString( n_str );
        Mat* _retval_ = new Mat();
        vector_int_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::face::FaceRecognizer::predict(Mat src, Ptr_PredictCollector collector)
//

using namespace cv::face;

JNIEXPORT void JNICALL Java_org_opencv_face_FaceRecognizer_predict_1collect_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_FaceRecognizer_predict_1collect_10
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jlong collector_nativeObj)
{
    static const char method_name[] = "face::predict_1collect_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::FaceRecognizer>* me = (Ptr<cv::face::FaceRecognizer>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        (*me)->predict( src, *((Ptr<cv::face::PredictCollector>*)collector_nativeObj) );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::face::FaceRecognizer::predict(Mat src, int& label, double& confidence)
//

using namespace cv::face;

JNIEXPORT void JNICALL Java_org_opencv_face_FaceRecognizer_predict_10 (JNIEnv*, jclass, jlong, jlong, jdoubleArray, jdoubleArray);

JNIEXPORT void JNICALL Java_org_opencv_face_FaceRecognizer_predict_10
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jdoubleArray label_out, jdoubleArray confidence_out)
{
    static const char method_name[] = "face::predict_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::FaceRecognizer>* me = (Ptr<cv::face::FaceRecognizer>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        int label;
        double confidence;
        (*me)->predict( src, label, confidence );
        jdouble tmp_label[1] = {(jdouble)label}; env->SetDoubleArrayRegion(label_out, 0, 1, tmp_label);
        jdouble tmp_confidence[1] = {(jdouble)confidence}; env->SetDoubleArrayRegion(confidence_out, 0, 1, tmp_confidence);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::face::FaceRecognizer::read(String filename)
//

using namespace cv::face;

JNIEXPORT void JNICALL Java_org_opencv_face_FaceRecognizer_read_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_face_FaceRecognizer_read_10
  (JNIEnv* env, jclass , jlong self, jstring filename)
{
    static const char method_name[] = "face::read_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::FaceRecognizer>* me = (Ptr<cv::face::FaceRecognizer>*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        (*me)->read( n_filename );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::face::FaceRecognizer::setLabelInfo(int label, String strInfo)
//

using namespace cv::face;

JNIEXPORT void JNICALL Java_org_opencv_face_FaceRecognizer_setLabelInfo_10 (JNIEnv*, jclass, jlong, jint, jstring);

JNIEXPORT void JNICALL Java_org_opencv_face_FaceRecognizer_setLabelInfo_10
  (JNIEnv* env, jclass , jlong self, jint label, jstring strInfo)
{
    static const char method_name[] = "face::setLabelInfo_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::FaceRecognizer>* me = (Ptr<cv::face::FaceRecognizer>*) self; //TODO: check for NULL
        const char* utf_strInfo = env->GetStringUTFChars(strInfo, 0); String n_strInfo( utf_strInfo ? utf_strInfo : "" ); env->ReleaseStringUTFChars(strInfo, utf_strInfo);
        (*me)->setLabelInfo( (int)label, n_strInfo );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::face::FaceRecognizer::train(vector_Mat src, Mat labels)
//

using namespace cv::face;

JNIEXPORT void JNICALL Java_org_opencv_face_FaceRecognizer_train_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_FaceRecognizer_train_10
  (JNIEnv* env, jclass , jlong self, jlong src_mat_nativeObj, jlong labels_nativeObj)
{
    static const char method_name[] = "face::train_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> src;
        Mat& src_mat = *((Mat*)src_mat_nativeObj);
        Mat_to_vector_Mat( src_mat, src );
        Ptr<cv::face::FaceRecognizer>* me = (Ptr<cv::face::FaceRecognizer>*) self; //TODO: check for NULL
        Mat& labels = *((Mat*)labels_nativeObj);
        (*me)->train( src, labels );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::face::FaceRecognizer::update(vector_Mat src, Mat labels)
//

using namespace cv::face;

JNIEXPORT void JNICALL Java_org_opencv_face_FaceRecognizer_update_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_FaceRecognizer_update_10
  (JNIEnv* env, jclass , jlong self, jlong src_mat_nativeObj, jlong labels_nativeObj)
{
    static const char method_name[] = "face::update_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> src;
        Mat& src_mat = *((Mat*)src_mat_nativeObj);
        Mat_to_vector_Mat( src_mat, src );
        Ptr<cv::face::FaceRecognizer>* me = (Ptr<cv::face::FaceRecognizer>*) self; //TODO: check for NULL
        Mat& labels = *((Mat*)labels_nativeObj);
        (*me)->update( src, labels );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::face::FaceRecognizer::write(String filename)
//

using namespace cv::face;

JNIEXPORT void JNICALL Java_org_opencv_face_FaceRecognizer_write_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_face_FaceRecognizer_write_10
  (JNIEnv* env, jclass , jlong self, jstring filename)
{
    static const char method_name[] = "face::write_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::FaceRecognizer>* me = (Ptr<cv::face::FaceRecognizer>*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        (*me)->write( n_filename );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::face::FaceRecognizer>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_face_FaceRecognizer_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_FaceRecognizer_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::face::FaceRecognizer>*) self;
}


//
//  Mat cv::face::LBPHFaceRecognizer::getLabels()
//

using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_LBPHFaceRecognizer_getLabels_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_face_LBPHFaceRecognizer_getLabels_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "face::getLabels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::LBPHFaceRecognizer>* me = (Ptr<cv::face::LBPHFaceRecognizer>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getLabels();
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_LBPHFaceRecognizer cv::face::LBPHFaceRecognizer::create(int radius = 1, int neighbors = 8, int grid_x = 8, int grid_y = 8, double threshold = DBL_MAX)
//

using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_LBPHFaceRecognizer_create_10 (JNIEnv*, jclass, jint, jint, jint, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_face_LBPHFaceRecognizer_create_10
  (JNIEnv* env, jclass , jint radius, jint neighbors, jint grid_x, jint grid_y, jdouble threshold)
{
    static const char method_name[] = "face::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::LBPHFaceRecognizer> Ptr_LBPHFaceRecognizer;
        Ptr_LBPHFaceRecognizer _retval_ = cv::face::LBPHFaceRecognizer::create( (int)radius, (int)neighbors, (int)grid_x, (int)grid_y, (double)threshold );
        return (jlong)(new Ptr_LBPHFaceRecognizer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_LBPHFaceRecognizer_create_11 (JNIEnv*, jclass, jint, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_face_LBPHFaceRecognizer_create_11
  (JNIEnv* env, jclass , jint radius, jint neighbors, jint grid_x, jint grid_y)
{
    static const char method_name[] = "face::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::LBPHFaceRecognizer> Ptr_LBPHFaceRecognizer;
        Ptr_LBPHFaceRecognizer _retval_ = cv::face::LBPHFaceRecognizer::create( (int)radius, (int)neighbors, (int)grid_x, (int)grid_y );
        return (jlong)(new Ptr_LBPHFaceRecognizer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_LBPHFaceRecognizer_create_12 (JNIEnv*, jclass, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_face_LBPHFaceRecognizer_create_12
  (JNIEnv* env, jclass , jint radius, jint neighbors, jint grid_x)
{
    static const char method_name[] = "face::create_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::LBPHFaceRecognizer> Ptr_LBPHFaceRecognizer;
        Ptr_LBPHFaceRecognizer _retval_ = cv::face::LBPHFaceRecognizer::create( (int)radius, (int)neighbors, (int)grid_x );
        return (jlong)(new Ptr_LBPHFaceRecognizer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_LBPHFaceRecognizer_create_13 (JNIEnv*, jclass, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_face_LBPHFaceRecognizer_create_13
  (JNIEnv* env, jclass , jint radius, jint neighbors)
{
    static const char method_name[] = "face::create_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::LBPHFaceRecognizer> Ptr_LBPHFaceRecognizer;
        Ptr_LBPHFaceRecognizer _retval_ = cv::face::LBPHFaceRecognizer::create( (int)radius, (int)neighbors );
        return (jlong)(new Ptr_LBPHFaceRecognizer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_LBPHFaceRecognizer_create_14 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_face_LBPHFaceRecognizer_create_14
  (JNIEnv* env, jclass , jint radius)
{
    static const char method_name[] = "face::create_14()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::LBPHFaceRecognizer> Ptr_LBPHFaceRecognizer;
        Ptr_LBPHFaceRecognizer _retval_ = cv::face::LBPHFaceRecognizer::create( (int)radius );
        return (jlong)(new Ptr_LBPHFaceRecognizer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_LBPHFaceRecognizer_create_15 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_face_LBPHFaceRecognizer_create_15
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "face::create_15()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::LBPHFaceRecognizer> Ptr_LBPHFaceRecognizer;
        Ptr_LBPHFaceRecognizer _retval_ = cv::face::LBPHFaceRecognizer::create();
        return (jlong)(new Ptr_LBPHFaceRecognizer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::face::LBPHFaceRecognizer::getThreshold()
//

using namespace cv::face;

JNIEXPORT jdouble JNICALL Java_org_opencv_face_LBPHFaceRecognizer_getThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_face_LBPHFaceRecognizer_getThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "face::getThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::LBPHFaceRecognizer>* me = (Ptr<cv::face::LBPHFaceRecognizer>*) self; //TODO: check for NULL
        return (*me)->getThreshold();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::face::LBPHFaceRecognizer::getGridX()
//

using namespace cv::face;

JNIEXPORT jint JNICALL Java_org_opencv_face_LBPHFaceRecognizer_getGridX_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_face_LBPHFaceRecognizer_getGridX_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "face::getGridX_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::LBPHFaceRecognizer>* me = (Ptr<cv::face::LBPHFaceRecognizer>*) self; //TODO: check for NULL
        return (*me)->getGridX();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::face::LBPHFaceRecognizer::getGridY()
//

using namespace cv::face;

JNIEXPORT jint JNICALL Java_org_opencv_face_LBPHFaceRecognizer_getGridY_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_face_LBPHFaceRecognizer_getGridY_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "face::getGridY_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::LBPHFaceRecognizer>* me = (Ptr<cv::face::LBPHFaceRecognizer>*) self; //TODO: check for NULL
        return (*me)->getGridY();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::face::LBPHFaceRecognizer::getNeighbors()
//

using namespace cv::face;

JNIEXPORT jint JNICALL Java_org_opencv_face_LBPHFaceRecognizer_getNeighbors_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_face_LBPHFaceRecognizer_getNeighbors_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "face::getNeighbors_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::LBPHFaceRecognizer>* me = (Ptr<cv::face::LBPHFaceRecognizer>*) self; //TODO: check for NULL
        return (*me)->getNeighbors();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::face::LBPHFaceRecognizer::getRadius()
//

using namespace cv::face;

JNIEXPORT jint JNICALL Java_org_opencv_face_LBPHFaceRecognizer_getRadius_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_face_LBPHFaceRecognizer_getRadius_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "face::getRadius_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::LBPHFaceRecognizer>* me = (Ptr<cv::face::LBPHFaceRecognizer>*) self; //TODO: check for NULL
        return (*me)->getRadius();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_Mat cv::face::LBPHFaceRecognizer::getHistograms()
//

using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_LBPHFaceRecognizer_getHistograms_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_face_LBPHFaceRecognizer_getHistograms_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "face::getHistograms_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::LBPHFaceRecognizer>* me = (Ptr<cv::face::LBPHFaceRecognizer>*) self; //TODO: check for NULL
        std::vector<Mat> _ret_val_vector_ = (*me)->getHistograms();
        Mat* _retval_ = new Mat();
        vector_Mat_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::face::LBPHFaceRecognizer::setGridX(int val)
//

using namespace cv::face;

JNIEXPORT void JNICALL Java_org_opencv_face_LBPHFaceRecognizer_setGridX_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_face_LBPHFaceRecognizer_setGridX_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "face::setGridX_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::LBPHFaceRecognizer>* me = (Ptr<cv::face::LBPHFaceRecognizer>*) self; //TODO: check for NULL
        (*me)->setGridX( (int)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::face::LBPHFaceRecognizer::setGridY(int val)
//

using namespace cv::face;

JNIEXPORT void JNICALL Java_org_opencv_face_LBPHFaceRecognizer_setGridY_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_face_LBPHFaceRecognizer_setGridY_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "face::setGridY_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::LBPHFaceRecognizer>* me = (Ptr<cv::face::LBPHFaceRecognizer>*) self; //TODO: check for NULL
        (*me)->setGridY( (int)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::face::LBPHFaceRecognizer::setNeighbors(int val)
//

using namespace cv::face;

JNIEXPORT void JNICALL Java_org_opencv_face_LBPHFaceRecognizer_setNeighbors_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_face_LBPHFaceRecognizer_setNeighbors_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "face::setNeighbors_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::LBPHFaceRecognizer>* me = (Ptr<cv::face::LBPHFaceRecognizer>*) self; //TODO: check for NULL
        (*me)->setNeighbors( (int)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::face::LBPHFaceRecognizer::setRadius(int val)
//

using namespace cv::face;

JNIEXPORT void JNICALL Java_org_opencv_face_LBPHFaceRecognizer_setRadius_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_face_LBPHFaceRecognizer_setRadius_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "face::setRadius_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::LBPHFaceRecognizer>* me = (Ptr<cv::face::LBPHFaceRecognizer>*) self; //TODO: check for NULL
        (*me)->setRadius( (int)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::face::LBPHFaceRecognizer::setThreshold(double val)
//

using namespace cv::face;

JNIEXPORT void JNICALL Java_org_opencv_face_LBPHFaceRecognizer_setThreshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_face_LBPHFaceRecognizer_setThreshold_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "face::setThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::LBPHFaceRecognizer>* me = (Ptr<cv::face::LBPHFaceRecognizer>*) self; //TODO: check for NULL
        (*me)->setThreshold( (double)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::face::LBPHFaceRecognizer>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_face_LBPHFaceRecognizer_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_LBPHFaceRecognizer_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::face::LBPHFaceRecognizer>*) self;
}


//
//  Ptr_Facemark cv::face::createFacemarkAAM()
//



JNIEXPORT jlong JNICALL Java_org_opencv_face_Face_createFacemarkAAM_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_face_Face_createFacemarkAAM_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "face::createFacemarkAAM_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::Facemark> Ptr_Facemark;
        Ptr_Facemark _retval_ = cv::face::createFacemarkAAM();
        return (jlong)(new Ptr_Facemark(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_Facemark cv::face::createFacemarkKazemi()
//



JNIEXPORT jlong JNICALL Java_org_opencv_face_Face_createFacemarkKazemi_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_face_Face_createFacemarkKazemi_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "face::createFacemarkKazemi_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::Facemark> Ptr_Facemark;
        Ptr_Facemark _retval_ = cv::face::createFacemarkKazemi();
        return (jlong)(new Ptr_Facemark(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_Facemark cv::face::createFacemarkLBF()
//



JNIEXPORT jlong JNICALL Java_org_opencv_face_Face_createFacemarkLBF_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_face_Face_createFacemarkLBF_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "face::createFacemarkLBF_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::Facemark> Ptr_Facemark;
        Ptr_Facemark _retval_ = cv::face::createFacemarkLBF();
        return (jlong)(new Ptr_Facemark(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::face::getFacesHAAR(Mat image, Mat& faces, String face_cascade_name)
//



JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_getFacesHAAR_10 (JNIEnv*, jclass, jlong, jlong, jstring);

JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_getFacesHAAR_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong faces_nativeObj, jstring face_cascade_name)
{
    static const char method_name[] = "face::getFacesHAAR_10()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& faces = *((Mat*)faces_nativeObj);
        const char* utf_face_cascade_name = env->GetStringUTFChars(face_cascade_name, 0); String n_face_cascade_name( utf_face_cascade_name ? utf_face_cascade_name : "" ); env->ReleaseStringUTFChars(face_cascade_name, utf_face_cascade_name);
        return cv::face::getFacesHAAR( image, faces, n_face_cascade_name );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::face::loadDatasetList(String imageList, String annotationList, vector_String images, vector_String annotations)
//



JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_loadDatasetList_10 (JNIEnv*, jclass, jstring, jstring, jobject, jobject);

JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_loadDatasetList_10
  (JNIEnv* env, jclass , jstring imageList, jstring annotationList, jobject images_list, jobject annotations_list)
{
    static const char method_name[] = "face::loadDatasetList_10()";
    try {
        LOGD("%s", method_name);
        std::vector< String > images;
        images = List_to_vector_String(env, images_list);
        std::vector< String > annotations;
        annotations = List_to_vector_String(env, annotations_list);
        const char* utf_imageList = env->GetStringUTFChars(imageList, 0); String n_imageList( utf_imageList ? utf_imageList : "" ); env->ReleaseStringUTFChars(imageList, utf_imageList);
        const char* utf_annotationList = env->GetStringUTFChars(annotationList, 0); String n_annotationList( utf_annotationList ? utf_annotationList : "" ); env->ReleaseStringUTFChars(annotationList, utf_annotationList);
        return cv::face::loadDatasetList( n_imageList, n_annotationList, images, annotations );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::face::loadFacePoints(String filename, Mat& points, float offset = 0.0f)
//



JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_loadFacePoints_10 (JNIEnv*, jclass, jstring, jlong, jfloat);

JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_loadFacePoints_10
  (JNIEnv* env, jclass , jstring filename, jlong points_nativeObj, jfloat offset)
{
    static const char method_name[] = "face::loadFacePoints_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Mat& points = *((Mat*)points_nativeObj);
        return cv::face::loadFacePoints( n_filename, points, (float)offset );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_loadFacePoints_11 (JNIEnv*, jclass, jstring, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_loadFacePoints_11
  (JNIEnv* env, jclass , jstring filename, jlong points_nativeObj)
{
    static const char method_name[] = "face::loadFacePoints_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Mat& points = *((Mat*)points_nativeObj);
        return cv::face::loadFacePoints( n_filename, points );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::face::loadTrainingData(String filename, vector_String images, Mat& facePoints, char delim = ' ', float offset = 0.0f)
//



JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_loadTrainingData_10 (JNIEnv*, jclass, jstring, jobject, jlong, jchar, jfloat);

JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_loadTrainingData_10
  (JNIEnv* env, jclass , jstring filename, jobject images_list, jlong facePoints_nativeObj, jchar delim, jfloat offset)
{
    static const char method_name[] = "face::loadTrainingData_10()";
    try {
        LOGD("%s", method_name);
        std::vector< String > images;
        images = List_to_vector_String(env, images_list);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Mat& facePoints = *((Mat*)facePoints_nativeObj);
        return cv::face::loadTrainingData( n_filename, images, facePoints, (char)delim, (float)offset );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_loadTrainingData_11 (JNIEnv*, jclass, jstring, jobject, jlong, jchar);

JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_loadTrainingData_11
  (JNIEnv* env, jclass , jstring filename, jobject images_list, jlong facePoints_nativeObj, jchar delim)
{
    static const char method_name[] = "face::loadTrainingData_11()";
    try {
        LOGD("%s", method_name);
        std::vector< String > images;
        images = List_to_vector_String(env, images_list);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Mat& facePoints = *((Mat*)facePoints_nativeObj);
        return cv::face::loadTrainingData( n_filename, images, facePoints, (char)delim );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_loadTrainingData_12 (JNIEnv*, jclass, jstring, jobject, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_loadTrainingData_12
  (JNIEnv* env, jclass , jstring filename, jobject images_list, jlong facePoints_nativeObj)
{
    static const char method_name[] = "face::loadTrainingData_12()";
    try {
        LOGD("%s", method_name);
        std::vector< String > images;
        images = List_to_vector_String(env, images_list);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Mat& facePoints = *((Mat*)facePoints_nativeObj);
        return cv::face::loadTrainingData( n_filename, images, facePoints );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::face::loadTrainingData(String imageList, String groundTruth, vector_String images, Mat& facePoints, float offset = 0.0f)
//



JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_loadTrainingData_13 (JNIEnv*, jclass, jstring, jstring, jobject, jlong, jfloat);

JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_loadTrainingData_13
  (JNIEnv* env, jclass , jstring imageList, jstring groundTruth, jobject images_list, jlong facePoints_nativeObj, jfloat offset)
{
    static const char method_name[] = "face::loadTrainingData_13()";
    try {
        LOGD("%s", method_name);
        std::vector< String > images;
        images = List_to_vector_String(env, images_list);
        const char* utf_imageList = env->GetStringUTFChars(imageList, 0); String n_imageList( utf_imageList ? utf_imageList : "" ); env->ReleaseStringUTFChars(imageList, utf_imageList);
        const char* utf_groundTruth = env->GetStringUTFChars(groundTruth, 0); String n_groundTruth( utf_groundTruth ? utf_groundTruth : "" ); env->ReleaseStringUTFChars(groundTruth, utf_groundTruth);
        Mat& facePoints = *((Mat*)facePoints_nativeObj);
        return cv::face::loadTrainingData( n_imageList, n_groundTruth, images, facePoints, (float)offset );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_loadTrainingData_14 (JNIEnv*, jclass, jstring, jstring, jobject, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_loadTrainingData_14
  (JNIEnv* env, jclass , jstring imageList, jstring groundTruth, jobject images_list, jlong facePoints_nativeObj)
{
    static const char method_name[] = "face::loadTrainingData_14()";
    try {
        LOGD("%s", method_name);
        std::vector< String > images;
        images = List_to_vector_String(env, images_list);
        const char* utf_imageList = env->GetStringUTFChars(imageList, 0); String n_imageList( utf_imageList ? utf_imageList : "" ); env->ReleaseStringUTFChars(imageList, utf_imageList);
        const char* utf_groundTruth = env->GetStringUTFChars(groundTruth, 0); String n_groundTruth( utf_groundTruth ? utf_groundTruth : "" ); env->ReleaseStringUTFChars(groundTruth, utf_groundTruth);
        Mat& facePoints = *((Mat*)facePoints_nativeObj);
        return cv::face::loadTrainingData( n_imageList, n_groundTruth, images, facePoints );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::face::loadTrainingData(vector_String filename, vector_vector_Point2f trainlandmarks, vector_String trainimages)
//



JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_loadTrainingData_15 (JNIEnv*, jclass, jobject, jlong, jobject);

JNIEXPORT jboolean JNICALL Java_org_opencv_face_Face_loadTrainingData_15
  (JNIEnv* env, jclass , jobject filename_list, jlong trainlandmarks_mat_nativeObj, jobject trainimages_list)
{
    static const char method_name[] = "face::loadTrainingData_15()";
    try {
        LOGD("%s", method_name);
        std::vector< String > filename;
        filename = List_to_vector_String(env, filename_list);
        std::vector< std::vector<Point2f> > trainlandmarks;
        Mat& trainlandmarks_mat = *((Mat*)trainlandmarks_mat_nativeObj);
        Mat_to_vector_vector_Point2f( trainlandmarks_mat, trainlandmarks );
        std::vector< String > trainimages;
        trainimages = List_to_vector_String(env, trainimages_list);
        return cv::face::loadTrainingData( filename, trainlandmarks, trainimages );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::face::drawFacemarks(Mat& image, Mat points, Scalar color = Scalar(255,0,0))
//



JNIEXPORT void JNICALL Java_org_opencv_face_Face_drawFacemarks_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_face_Face_drawFacemarks_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong points_nativeObj, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3)
{
    static const char method_name[] = "face::drawFacemarks_10()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& points = *((Mat*)points_nativeObj);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::face::drawFacemarks( image, points, color );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_face_Face_drawFacemarks_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_Face_drawFacemarks_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong points_nativeObj)
{
    static const char method_name[] = "face::drawFacemarks_11()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& points = *((Mat*)points_nativeObj);
        cv::face::drawFacemarks( image, points );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::face::PredictCollector::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_face_PredictCollector_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_PredictCollector_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::face::PredictCollector*) self;
}


//
// static Ptr_MACE cv::face::MACE::create(int IMGSIZE = 64)
//

using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_MACE_create_10 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_face_MACE_create_10
  (JNIEnv* env, jclass , jint IMGSIZE)
{
    static const char method_name[] = "face::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::MACE> Ptr_MACE;
        Ptr_MACE _retval_ = cv::face::MACE::create( (int)IMGSIZE );
        return (jlong)(new Ptr_MACE(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_MACE_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_face_MACE_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "face::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::MACE> Ptr_MACE;
        Ptr_MACE _retval_ = cv::face::MACE::create();
        return (jlong)(new Ptr_MACE(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_MACE cv::face::MACE::load(String filename, String objname = String())
//

using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_MACE_load_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_face_MACE_load_10
  (JNIEnv* env, jclass , jstring filename, jstring objname)
{
    static const char method_name[] = "face::load_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::MACE> Ptr_MACE;
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        const char* utf_objname = env->GetStringUTFChars(objname, 0); String n_objname( utf_objname ? utf_objname : "" ); env->ReleaseStringUTFChars(objname, utf_objname);
        Ptr_MACE _retval_ = cv::face::MACE::load( n_filename, n_objname );
        return (jlong)(new Ptr_MACE(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_MACE_load_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_face_MACE_load_11
  (JNIEnv* env, jclass , jstring filename)
{
    static const char method_name[] = "face::load_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::MACE> Ptr_MACE;
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Ptr_MACE _retval_ = cv::face::MACE::load( n_filename );
        return (jlong)(new Ptr_MACE(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::face::MACE::same(Mat query)
//

using namespace cv::face;

JNIEXPORT jboolean JNICALL Java_org_opencv_face_MACE_same_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_face_MACE_same_10
  (JNIEnv* env, jclass , jlong self, jlong query_nativeObj)
{
    static const char method_name[] = "face::same_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::MACE>* me = (Ptr<cv::face::MACE>*) self; //TODO: check for NULL
        Mat& query = *((Mat*)query_nativeObj);
        return (*me)->same( query );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::face::MACE::salt(String passphrase)
//

using namespace cv::face;

JNIEXPORT void JNICALL Java_org_opencv_face_MACE_salt_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_face_MACE_salt_10
  (JNIEnv* env, jclass , jlong self, jstring passphrase)
{
    static const char method_name[] = "face::salt_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::MACE>* me = (Ptr<cv::face::MACE>*) self; //TODO: check for NULL
        const char* utf_passphrase = env->GetStringUTFChars(passphrase, 0); String n_passphrase( utf_passphrase ? utf_passphrase : "" ); env->ReleaseStringUTFChars(passphrase, utf_passphrase);
        (*me)->salt( n_passphrase );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::face::MACE::train(vector_Mat images)
//

using namespace cv::face;

JNIEXPORT void JNICALL Java_org_opencv_face_MACE_train_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_MACE_train_10
  (JNIEnv* env, jclass , jlong self, jlong images_mat_nativeObj)
{
    static const char method_name[] = "face::train_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        Ptr<cv::face::MACE>* me = (Ptr<cv::face::MACE>*) self; //TODO: check for NULL
        (*me)->train( images );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::face::MACE>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_face_MACE_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_MACE_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::face::MACE>*) self;
}


//
//  native support for java finalize()
//  static void Ptr<cv::face::FacemarkLBF>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_face_FacemarkLBF_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_FacemarkLBF_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::face::FacemarkLBF>*) self;
}


//
//  bool cv::face::Facemark::fit(Mat image, vector_Rect faces, vector_vector_Point2f& landmarks)
//

using namespace cv::face;

JNIEXPORT jboolean JNICALL Java_org_opencv_face_Facemark_fit_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_face_Facemark_fit_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong faces_mat_nativeObj, jlong landmarks_mat_nativeObj)
{
    static const char method_name[] = "face::fit_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> faces;
        Mat& faces_mat = *((Mat*)faces_mat_nativeObj);
        Mat_to_vector_Rect( faces_mat, faces );
        std::vector< std::vector<Point2f> > landmarks;
        Mat& landmarks_mat = *((Mat*)landmarks_mat_nativeObj);
        Ptr<cv::face::Facemark>* me = (Ptr<cv::face::Facemark>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        bool _retval_ = (*me)->fit( image, faces, landmarks );
        vector_vector_Point2f_to_Mat( landmarks, landmarks_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::face::Facemark::loadModel(String model)
//

using namespace cv::face;

JNIEXPORT void JNICALL Java_org_opencv_face_Facemark_loadModel_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_face_Facemark_loadModel_10
  (JNIEnv* env, jclass , jlong self, jstring model)
{
    static const char method_name[] = "face::loadModel_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::Facemark>* me = (Ptr<cv::face::Facemark>*) self; //TODO: check for NULL
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        (*me)->loadModel( n_model );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::face::Facemark>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_face_Facemark_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_Facemark_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::face::Facemark>*) self;
}


//
// static Ptr_EigenFaceRecognizer cv::face::EigenFaceRecognizer::create(int num_components = 0, double threshold = DBL_MAX)
//

using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_EigenFaceRecognizer_create_10 (JNIEnv*, jclass, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_face_EigenFaceRecognizer_create_10
  (JNIEnv* env, jclass , jint num_components, jdouble threshold)
{
    static const char method_name[] = "face::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::EigenFaceRecognizer> Ptr_EigenFaceRecognizer;
        Ptr_EigenFaceRecognizer _retval_ = cv::face::EigenFaceRecognizer::create( (int)num_components, (double)threshold );
        return (jlong)(new Ptr_EigenFaceRecognizer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_EigenFaceRecognizer_create_11 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_face_EigenFaceRecognizer_create_11
  (JNIEnv* env, jclass , jint num_components)
{
    static const char method_name[] = "face::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::EigenFaceRecognizer> Ptr_EigenFaceRecognizer;
        Ptr_EigenFaceRecognizer _retval_ = cv::face::EigenFaceRecognizer::create( (int)num_components );
        return (jlong)(new Ptr_EigenFaceRecognizer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_EigenFaceRecognizer_create_12 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_face_EigenFaceRecognizer_create_12
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "face::create_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::EigenFaceRecognizer> Ptr_EigenFaceRecognizer;
        Ptr_EigenFaceRecognizer _retval_ = cv::face::EigenFaceRecognizer::create();
        return (jlong)(new Ptr_EigenFaceRecognizer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::face::EigenFaceRecognizer>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_face_EigenFaceRecognizer_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_EigenFaceRecognizer_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::face::EigenFaceRecognizer>*) self;
}


//
//  Mat cv::face::BasicFaceRecognizer::getEigenValues()
//

using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_BasicFaceRecognizer_getEigenValues_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_face_BasicFaceRecognizer_getEigenValues_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "face::getEigenValues_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::BasicFaceRecognizer>* me = (Ptr<cv::face::BasicFaceRecognizer>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getEigenValues();
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat cv::face::BasicFaceRecognizer::getEigenVectors()
//

using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_BasicFaceRecognizer_getEigenVectors_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_face_BasicFaceRecognizer_getEigenVectors_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "face::getEigenVectors_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::BasicFaceRecognizer>* me = (Ptr<cv::face::BasicFaceRecognizer>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getEigenVectors();
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat cv::face::BasicFaceRecognizer::getLabels()
//

using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_BasicFaceRecognizer_getLabels_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_face_BasicFaceRecognizer_getLabels_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "face::getLabels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::BasicFaceRecognizer>* me = (Ptr<cv::face::BasicFaceRecognizer>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getLabels();
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat cv::face::BasicFaceRecognizer::getMean()
//

using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_BasicFaceRecognizer_getMean_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_face_BasicFaceRecognizer_getMean_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "face::getMean_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::BasicFaceRecognizer>* me = (Ptr<cv::face::BasicFaceRecognizer>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getMean();
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::face::BasicFaceRecognizer::getThreshold()
//

using namespace cv::face;

JNIEXPORT jdouble JNICALL Java_org_opencv_face_BasicFaceRecognizer_getThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_face_BasicFaceRecognizer_getThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "face::getThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::BasicFaceRecognizer>* me = (Ptr<cv::face::BasicFaceRecognizer>*) self; //TODO: check for NULL
        return (*me)->getThreshold();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::face::BasicFaceRecognizer::getNumComponents()
//

using namespace cv::face;

JNIEXPORT jint JNICALL Java_org_opencv_face_BasicFaceRecognizer_getNumComponents_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_face_BasicFaceRecognizer_getNumComponents_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "face::getNumComponents_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::BasicFaceRecognizer>* me = (Ptr<cv::face::BasicFaceRecognizer>*) self; //TODO: check for NULL
        return (*me)->getNumComponents();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_Mat cv::face::BasicFaceRecognizer::getProjections()
//

using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_BasicFaceRecognizer_getProjections_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_face_BasicFaceRecognizer_getProjections_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "face::getProjections_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::BasicFaceRecognizer>* me = (Ptr<cv::face::BasicFaceRecognizer>*) self; //TODO: check for NULL
        std::vector<Mat> _ret_val_vector_ = (*me)->getProjections();
        Mat* _retval_ = new Mat();
        vector_Mat_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::face::BasicFaceRecognizer::setNumComponents(int val)
//

using namespace cv::face;

JNIEXPORT void JNICALL Java_org_opencv_face_BasicFaceRecognizer_setNumComponents_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_face_BasicFaceRecognizer_setNumComponents_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "face::setNumComponents_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::BasicFaceRecognizer>* me = (Ptr<cv::face::BasicFaceRecognizer>*) self; //TODO: check for NULL
        (*me)->setNumComponents( (int)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::face::BasicFaceRecognizer::setThreshold(double val)
//

using namespace cv::face;

JNIEXPORT void JNICALL Java_org_opencv_face_BasicFaceRecognizer_setThreshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_face_BasicFaceRecognizer_setThreshold_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "face::setThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::BasicFaceRecognizer>* me = (Ptr<cv::face::BasicFaceRecognizer>*) self; //TODO: check for NULL
        (*me)->setThreshold( (double)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::face::BasicFaceRecognizer>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_face_BasicFaceRecognizer_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_BasicFaceRecognizer_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::face::BasicFaceRecognizer>*) self;
}


//
// static Ptr_StandardCollector cv::face::StandardCollector::create(double threshold = DBL_MAX)
//

using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_StandardCollector_create_10 (JNIEnv*, jclass, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_face_StandardCollector_create_10
  (JNIEnv* env, jclass , jdouble threshold)
{
    static const char method_name[] = "face::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::StandardCollector> Ptr_StandardCollector;
        Ptr_StandardCollector _retval_ = cv::face::StandardCollector::create( (double)threshold );
        return (jlong)(new Ptr_StandardCollector(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::face;

JNIEXPORT jlong JNICALL Java_org_opencv_face_StandardCollector_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_face_StandardCollector_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "face::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::face::StandardCollector> Ptr_StandardCollector;
        Ptr_StandardCollector _retval_ = cv::face::StandardCollector::create();
        return (jlong)(new Ptr_StandardCollector(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::face::StandardCollector::getMinDist()
//

using namespace cv::face;

JNIEXPORT jdouble JNICALL Java_org_opencv_face_StandardCollector_getMinDist_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_face_StandardCollector_getMinDist_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "face::getMinDist_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::StandardCollector>* me = (Ptr<cv::face::StandardCollector>*) self; //TODO: check for NULL
        return (*me)->getMinDist();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::face::StandardCollector::getMinLabel()
//

using namespace cv::face;

JNIEXPORT jint JNICALL Java_org_opencv_face_StandardCollector_getMinLabel_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_face_StandardCollector_getMinLabel_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "face::getMinLabel_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::face::StandardCollector>* me = (Ptr<cv::face::StandardCollector>*) self; //TODO: check for NULL
        return (*me)->getMinLabel();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::face::StandardCollector>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_face_StandardCollector_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_StandardCollector_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::face::StandardCollector>*) self;
}


//
//  native support for java finalize()
//  static void Ptr<cv::face::FacemarkAAM>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_face_FacemarkAAM_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_face_FacemarkAAM_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::face::FacemarkAAM>*) self;
}



} // extern "C"

#endif // HAVE_OPENCV_FACE

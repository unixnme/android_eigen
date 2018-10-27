#include <jni.h>
#include <string>
#include <Eigen/Dense>
using Eigen::MatrixXd;

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_linuxnme_jni_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {

    MatrixXd m(2,2);
    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);

    std::stringstream ss;
    ss << m;

    return env->NewStringUTF(ss.str().c_str());
}

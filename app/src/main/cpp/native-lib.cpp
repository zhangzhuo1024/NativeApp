#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_nativeapp_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_nativeapp_MyNdkTest_getData(JNIEnv *env, jobject thiz) {
    std::string hello = "我还会回来的";
    return env->NewStringUTF(hello.c_str());
}
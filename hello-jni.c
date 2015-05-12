#include <jni.h>  
/*
 * Class:     Hello
 * Method:    helloFromJNI
 * Signature: ()V
 */

void callBack(JNIEnv* env) {
    jobject obj = (*env)->NewStringUTF(env, "Hello");
}

void JNICALL Java_Test_helloFromJNI (JNIEnv * env, jobject obj) {
       int i = 0;
       for (i = 0; i < 512; i++) {
           callBack(env);
       }

       obj = obj;

       return;
} 

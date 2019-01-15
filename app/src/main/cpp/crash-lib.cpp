#include <jni.h>
#include <string>

void crash();

extern "C" JNIEXPORT void JNICALL
Java_com_wufanguitar_breakpad_MainActivity_crashDump(
        JNIEnv *env,
        jobject /* this */) {
    crash();
}

void crash() {
    volatile int *a = (int *) NULL;
    *a = 1;
}
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class stormstock_capi_CATHSAccount */

#ifndef _Included_stormstock_capi_CATHSAccount
#define _Included_stormstock_capi_CATHSAccount
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     stormstock_capi_CATHSAccount
 * Method:    initialize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_stormstock_capi_CATHSAccount_initialize
  (JNIEnv *, jclass);

/*
 * Class:     stormstock_capi_CATHSAccount
 * Method:    getAvailableMoney
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_stormstock_capi_CATHSAccount_getAvailableMoney
  (JNIEnv *, jclass);

/*
 * Class:     stormstock_capi_CATHSAccount
 * Method:    getAllMoney
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_stormstock_capi_CATHSAccount_getAllMoney
  (JNIEnv *, jclass);

/*
 * Class:     stormstock_capi_CATHSAccount
 * Method:    getAllStockMarketValue
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_stormstock_capi_CATHSAccount_getAllStockMarketValue
  (JNIEnv *, jclass);

/*
 * Class:     stormstock_capi_CATHSAccount
 * Method:    buyStock
 * Signature: (Ljava/lang/String;IF)I
 */
JNIEXPORT jint JNICALL Java_stormstock_capi_CATHSAccount_buyStock
  (JNIEnv *, jclass, jstring, jint, jfloat);

/*
 * Class:     stormstock_capi_CATHSAccount
 * Method:    sellStock
 * Signature: (Ljava/lang/String;IF)I
 */
JNIEXPORT jint JNICALL Java_stormstock_capi_CATHSAccount_sellStock
  (JNIEnv *, jclass, jstring, jint, jfloat);

#ifdef __cplusplus
}
#endif
#endif

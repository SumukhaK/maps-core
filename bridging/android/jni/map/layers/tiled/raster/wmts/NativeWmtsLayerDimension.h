// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wmts_capabilities.djinni

#pragma once

#include "WmtsLayerDimension.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeWmtsLayerDimension final {
public:
    using CppType = ::WmtsLayerDimension;
    using JniType = jobject;

    using Boxed = NativeWmtsLayerDimension;

    ~NativeWmtsLayerDimension();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeWmtsLayerDimension();
    friend ::djinni::JniClass<NativeWmtsLayerDimension>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/layers/tiled/raster/wmts/WmtsLayerDimension") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/ArrayList;)V") };
    const jfieldID field_identifier { ::djinni::jniGetFieldID(clazz.get(), "identifier", "Ljava/lang/String;") };
    const jfieldID field_defaultValue { ::djinni::jniGetFieldID(clazz.get(), "defaultValue", "Ljava/lang/String;") };
    const jfieldID field_values { ::djinni::jniGetFieldID(clazz.get(), "values", "Ljava/util/ArrayList;") };
};

}  // namespace djinni_generated
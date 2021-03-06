// This file is generated. Edit android/platform/scripts/generate-style-code.js, then run `make style-code-android`.

#include "symbol_layer.hpp"

#include <string>

#include "../conversion/property_value.hpp"

namespace mbgl {
namespace android {

    SymbolLayer::SymbolLayer(jni::JNIEnv& env, jni::String layerId, jni::String sourceId)
        : Layer(env, std::make_unique<mbgl::style::SymbolLayer>(jni::Make<std::string>(env, layerId), jni::Make<std::string>(env, sourceId))) {
    }

    SymbolLayer::SymbolLayer(mbgl::Map& map, mbgl::style::SymbolLayer& coreLayer)
        : Layer(map, coreLayer) {
    }

    SymbolLayer::~SymbolLayer() = default;

    // Property getters

    jni::Object<jni::ObjectTag> SymbolLayer::getSymbolPlacement(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getSymbolPlacement());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getSymbolSpacing(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getSymbolSpacing());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getSymbolAvoidEdges(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getSymbolAvoidEdges());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getIconAllowOverlap(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getIconAllowOverlap());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getIconIgnorePlacement(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getIconIgnorePlacement());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getIconOptional(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getIconOptional());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getIconRotationAlignment(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getIconRotationAlignment());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getIconSize(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getIconSize());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getIconTextFit(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getIconTextFit());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getIconTextFitPadding(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getIconTextFitPadding());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getIconImage(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getIconImage());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getIconRotate(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getIconRotate());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getIconPadding(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getIconPadding());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getIconKeepUpright(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getIconKeepUpright());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getIconOffset(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getIconOffset());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextPitchAlignment(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextPitchAlignment());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextRotationAlignment(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextRotationAlignment());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextField(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextField());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextFont(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextFont());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextSize(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextSize());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextMaxWidth(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextMaxWidth());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextLineHeight(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextLineHeight());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextLetterSpacing(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextLetterSpacing());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextJustify(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextJustify());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextAnchor(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextAnchor());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextMaxAngle(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextMaxAngle());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextRotate(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextRotate());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextPadding(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextPadding());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextKeepUpright(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextKeepUpright());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextTransform(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextTransform());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextOffset(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextOffset());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextAllowOverlap(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextAllowOverlap());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextIgnorePlacement(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextIgnorePlacement());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextOptional(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextOptional());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getIconOpacity(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getIconOpacity());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getIconColor(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getIconColor());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getIconHaloColor(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getIconHaloColor());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getIconHaloWidth(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getIconHaloWidth());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getIconHaloBlur(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getIconHaloBlur());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getIconTranslate(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getIconTranslate());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getIconTranslateAnchor(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getIconTranslateAnchor());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextOpacity(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextOpacity());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextColor(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextColor());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextHaloColor(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextHaloColor());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextHaloWidth(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextHaloWidth());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextHaloBlur(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextHaloBlur());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextTranslate(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextTranslate());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Object<jni::ObjectTag> SymbolLayer::getTextTranslateAnchor(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::SymbolLayer>()->SymbolLayer::getTextTranslateAnchor());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Class<SymbolLayer> SymbolLayer::javaClass;

    jni::jobject* SymbolLayer::createJavaPeer(jni::JNIEnv& env) {
        static auto constructor = SymbolLayer::javaClass.template GetConstructor<jni::jlong>(env);
        return SymbolLayer::javaClass.New(env, constructor, reinterpret_cast<jni::jlong>(this));
    }

    void SymbolLayer::registerNative(jni::JNIEnv& env) {
        //Lookup the class
        SymbolLayer::javaClass = *jni::Class<SymbolLayer>::Find(env).NewGlobalRef(env).release();

        #define METHOD(MethodPtr, name) jni::MakeNativePeerMethod<decltype(MethodPtr), (MethodPtr)>(name)

        //Register the peer
        jni::RegisterNativePeer<SymbolLayer>(
            env, SymbolLayer::javaClass, "nativePtr",
            std::make_unique<SymbolLayer, JNIEnv&, jni::String, jni::String>,
            "initialize",
            "finalize",
            METHOD(&SymbolLayer::getSymbolPlacement, "nativeGetSymbolPlacement"),
            METHOD(&SymbolLayer::getSymbolSpacing, "nativeGetSymbolSpacing"),
            METHOD(&SymbolLayer::getSymbolAvoidEdges, "nativeGetSymbolAvoidEdges"),
            METHOD(&SymbolLayer::getIconAllowOverlap, "nativeGetIconAllowOverlap"),
            METHOD(&SymbolLayer::getIconIgnorePlacement, "nativeGetIconIgnorePlacement"),
            METHOD(&SymbolLayer::getIconOptional, "nativeGetIconOptional"),
            METHOD(&SymbolLayer::getIconRotationAlignment, "nativeGetIconRotationAlignment"),
            METHOD(&SymbolLayer::getIconSize, "nativeGetIconSize"),
            METHOD(&SymbolLayer::getIconTextFit, "nativeGetIconTextFit"),
            METHOD(&SymbolLayer::getIconTextFitPadding, "nativeGetIconTextFitPadding"),
            METHOD(&SymbolLayer::getIconImage, "nativeGetIconImage"),
            METHOD(&SymbolLayer::getIconRotate, "nativeGetIconRotate"),
            METHOD(&SymbolLayer::getIconPadding, "nativeGetIconPadding"),
            METHOD(&SymbolLayer::getIconKeepUpright, "nativeGetIconKeepUpright"),
            METHOD(&SymbolLayer::getIconOffset, "nativeGetIconOffset"),
            METHOD(&SymbolLayer::getTextPitchAlignment, "nativeGetTextPitchAlignment"),
            METHOD(&SymbolLayer::getTextRotationAlignment, "nativeGetTextRotationAlignment"),
            METHOD(&SymbolLayer::getTextField, "nativeGetTextField"),
            METHOD(&SymbolLayer::getTextFont, "nativeGetTextFont"),
            METHOD(&SymbolLayer::getTextSize, "nativeGetTextSize"),
            METHOD(&SymbolLayer::getTextMaxWidth, "nativeGetTextMaxWidth"),
            METHOD(&SymbolLayer::getTextLineHeight, "nativeGetTextLineHeight"),
            METHOD(&SymbolLayer::getTextLetterSpacing, "nativeGetTextLetterSpacing"),
            METHOD(&SymbolLayer::getTextJustify, "nativeGetTextJustify"),
            METHOD(&SymbolLayer::getTextAnchor, "nativeGetTextAnchor"),
            METHOD(&SymbolLayer::getTextMaxAngle, "nativeGetTextMaxAngle"),
            METHOD(&SymbolLayer::getTextRotate, "nativeGetTextRotate"),
            METHOD(&SymbolLayer::getTextPadding, "nativeGetTextPadding"),
            METHOD(&SymbolLayer::getTextKeepUpright, "nativeGetTextKeepUpright"),
            METHOD(&SymbolLayer::getTextTransform, "nativeGetTextTransform"),
            METHOD(&SymbolLayer::getTextOffset, "nativeGetTextOffset"),
            METHOD(&SymbolLayer::getTextAllowOverlap, "nativeGetTextAllowOverlap"),
            METHOD(&SymbolLayer::getTextIgnorePlacement, "nativeGetTextIgnorePlacement"),
            METHOD(&SymbolLayer::getTextOptional, "nativeGetTextOptional"),
            METHOD(&SymbolLayer::getIconOpacity, "nativeGetIconOpacity"),
            METHOD(&SymbolLayer::getIconColor, "nativeGetIconColor"),
            METHOD(&SymbolLayer::getIconHaloColor, "nativeGetIconHaloColor"),
            METHOD(&SymbolLayer::getIconHaloWidth, "nativeGetIconHaloWidth"),
            METHOD(&SymbolLayer::getIconHaloBlur, "nativeGetIconHaloBlur"),
            METHOD(&SymbolLayer::getIconTranslate, "nativeGetIconTranslate"),
            METHOD(&SymbolLayer::getIconTranslateAnchor, "nativeGetIconTranslateAnchor"),
            METHOD(&SymbolLayer::getTextOpacity, "nativeGetTextOpacity"),
            METHOD(&SymbolLayer::getTextColor, "nativeGetTextColor"),
            METHOD(&SymbolLayer::getTextHaloColor, "nativeGetTextHaloColor"),
            METHOD(&SymbolLayer::getTextHaloWidth, "nativeGetTextHaloWidth"),
            METHOD(&SymbolLayer::getTextHaloBlur, "nativeGetTextHaloBlur"),
            METHOD(&SymbolLayer::getTextTranslate, "nativeGetTextTranslate"),
            METHOD(&SymbolLayer::getTextTranslateAnchor, "nativeGetTextTranslateAnchor"));
    }

} // namespace android
} // namespace mbgl

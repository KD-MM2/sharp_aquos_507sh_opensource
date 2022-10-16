LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
include $(LOCAL_PATH)/Makefile.sources

LOCAL_SRC_FILES := $(filter-out %.h,$(MODETEST_FILES))

ifeq ($(TARGET_COMPILE_WITH_MSM_KERNEL),true)
kernel_includes += $(TARGET_OUT_INTERMEDIATES)/KERNEL_OBJ/usr/include
LOCAL_C_INCLUDES              := $(kernel_includes)
LOCAL_CFLAGS                  := $(common_flags) -DUSE_ION
LOCAL_ADDITIONAL_DEPENDENCIES := $(TARGET_OUT_INTERMEDIATES)/KERNEL_OBJ/usr
endif

LOCAL_MODULE := modetest

LOCAL_SHARED_LIBRARIES := libdrm_platform
LOCAL_STATIC_LIBRARIES := libdrm_util

LOCAL_C_INCLUDES += $(LOCAL_PATH)/..

include $(LIBDRM_COMMON_MK)
include $(BUILD_EXECUTABLE)

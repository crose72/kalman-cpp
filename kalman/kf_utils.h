#ifdef PROTECTED_RELEASE
#define KF_ASSERT_MSG(msg) ""
#else
#define KF_ASSERT_MSG(msg) msg
#endif
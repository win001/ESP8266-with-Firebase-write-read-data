#if defined(FIREBASE_READ_DATA)
#define FIREBASE_READ_DATA 1

#elif defined(FIREBASE_WRITE_DATA)
#define FIREBASE_WRITE_DATA 1

#else
#error "UNSUPPORTED HARDWARE!"
#endif
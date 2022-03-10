#ifdef __cplusplus 
#define EXTERN_C extern "C" 
#else
#define EXTERN_C     
#endif
    EXTERN_C void wrapper_f(int);
    EXTERN_C void wrapper_g(double);
    EXTERN_C void wrapper_h(); 
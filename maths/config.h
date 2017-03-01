#ifndef MATHSLIB_CONFIG_H
#define MATHSLIB_CONFIG_H

#ifdef WIN32
  #ifdef maths_STATIC
    #define MATHSLIB_API
  #else
    #ifdef maths_EXPORTS
      #define MATHSLIB_API __declspec(dllexport)
    #else
      #define MATHSLIB_API __declspec(dllimport)
    #endif
  #endif
#else
  #define MATHSLIB_API
#endif

#endif
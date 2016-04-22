
// This is a generated file. Do not edit!

#ifndef TEXTUREBASED_COMPILER_DETECTION_H
#define TEXTUREBASED_COMPILER_DETECTION_H

#ifdef __cplusplus
# define TEXTUREBASED_COMPILER_IS_Comeau 0
# define TEXTUREBASED_COMPILER_IS_Intel 0
# define TEXTUREBASED_COMPILER_IS_PathScale 0
# define TEXTUREBASED_COMPILER_IS_Embarcadero 0
# define TEXTUREBASED_COMPILER_IS_Borland 0
# define TEXTUREBASED_COMPILER_IS_Watcom 0
# define TEXTUREBASED_COMPILER_IS_OpenWatcom 0
# define TEXTUREBASED_COMPILER_IS_SunPro 0
# define TEXTUREBASED_COMPILER_IS_HP 0
# define TEXTUREBASED_COMPILER_IS_Compaq 0
# define TEXTUREBASED_COMPILER_IS_zOS 0
# define TEXTUREBASED_COMPILER_IS_XL 0
# define TEXTUREBASED_COMPILER_IS_VisualAge 0
# define TEXTUREBASED_COMPILER_IS_PGI 0
# define TEXTUREBASED_COMPILER_IS_Cray 0
# define TEXTUREBASED_COMPILER_IS_TI 0
# define TEXTUREBASED_COMPILER_IS_Fujitsu 0
# define TEXTUREBASED_COMPILER_IS_SCO 0
# define TEXTUREBASED_COMPILER_IS_AppleClang 0
# define TEXTUREBASED_COMPILER_IS_Clang 0
# define TEXTUREBASED_COMPILER_IS_GNU 0
# define TEXTUREBASED_COMPILER_IS_MSVC 0
# define TEXTUREBASED_COMPILER_IS_ADSP 0
# define TEXTUREBASED_COMPILER_IS_IAR 0
# define TEXTUREBASED_COMPILER_IS_MIPSpro 0

#if defined(__COMO__)
# undef TEXTUREBASED_COMPILER_IS_Comeau
# define TEXTUREBASED_COMPILER_IS_Comeau 1

#elif defined(__INTEL_COMPILER) || defined(__ICC)
# undef TEXTUREBASED_COMPILER_IS_Intel
# define TEXTUREBASED_COMPILER_IS_Intel 1

#elif defined(__PATHCC__)
# undef TEXTUREBASED_COMPILER_IS_PathScale
# define TEXTUREBASED_COMPILER_IS_PathScale 1

#elif defined(__BORLANDC__) && defined(__CODEGEARC_VERSION__)
# undef TEXTUREBASED_COMPILER_IS_Embarcadero
# define TEXTUREBASED_COMPILER_IS_Embarcadero 1

#elif defined(__BORLANDC__)
# undef TEXTUREBASED_COMPILER_IS_Borland
# define TEXTUREBASED_COMPILER_IS_Borland 1

#elif defined(__WATCOMC__) && __WATCOMC__ < 1200
# undef TEXTUREBASED_COMPILER_IS_Watcom
# define TEXTUREBASED_COMPILER_IS_Watcom 1

#elif defined(__WATCOMC__)
# undef TEXTUREBASED_COMPILER_IS_OpenWatcom
# define TEXTUREBASED_COMPILER_IS_OpenWatcom 1

#elif defined(__SUNPRO_CC)
# undef TEXTUREBASED_COMPILER_IS_SunPro
# define TEXTUREBASED_COMPILER_IS_SunPro 1

#elif defined(__HP_aCC)
# undef TEXTUREBASED_COMPILER_IS_HP
# define TEXTUREBASED_COMPILER_IS_HP 1

#elif defined(__DECCXX)
# undef TEXTUREBASED_COMPILER_IS_Compaq
# define TEXTUREBASED_COMPILER_IS_Compaq 1

#elif defined(__IBMCPP__) && defined(__COMPILER_VER__)
# undef TEXTUREBASED_COMPILER_IS_zOS
# define TEXTUREBASED_COMPILER_IS_zOS 1

#elif defined(__IBMCPP__) && !defined(__COMPILER_VER__) && __IBMCPP__ >= 800
# undef TEXTUREBASED_COMPILER_IS_XL
# define TEXTUREBASED_COMPILER_IS_XL 1

#elif defined(__IBMCPP__) && !defined(__COMPILER_VER__) && __IBMCPP__ < 800
# undef TEXTUREBASED_COMPILER_IS_VisualAge
# define TEXTUREBASED_COMPILER_IS_VisualAge 1

#elif defined(__PGI)
# undef TEXTUREBASED_COMPILER_IS_PGI
# define TEXTUREBASED_COMPILER_IS_PGI 1

#elif defined(_CRAYC)
# undef TEXTUREBASED_COMPILER_IS_Cray
# define TEXTUREBASED_COMPILER_IS_Cray 1

#elif defined(__TI_COMPILER_VERSION__)
# undef TEXTUREBASED_COMPILER_IS_TI
# define TEXTUREBASED_COMPILER_IS_TI 1

#elif defined(__FUJITSU) || defined(__FCC_VERSION) || defined(__fcc_version)
# undef TEXTUREBASED_COMPILER_IS_Fujitsu
# define TEXTUREBASED_COMPILER_IS_Fujitsu 1

#elif defined(__SCO_VERSION__)
# undef TEXTUREBASED_COMPILER_IS_SCO
# define TEXTUREBASED_COMPILER_IS_SCO 1

#elif defined(__clang__) && defined(__apple_build_version__)
# undef TEXTUREBASED_COMPILER_IS_AppleClang
# define TEXTUREBASED_COMPILER_IS_AppleClang 1

#elif defined(__clang__)
# undef TEXTUREBASED_COMPILER_IS_Clang
# define TEXTUREBASED_COMPILER_IS_Clang 1

#elif defined(__GNUC__)
# undef TEXTUREBASED_COMPILER_IS_GNU
# define TEXTUREBASED_COMPILER_IS_GNU 1

#elif defined(_MSC_VER)
# undef TEXTUREBASED_COMPILER_IS_MSVC
# define TEXTUREBASED_COMPILER_IS_MSVC 1

#elif defined(__VISUALDSPVERSION__) || defined(__ADSPBLACKFIN__) || defined(__ADSPTS__) || defined(__ADSP21000__)
# undef TEXTUREBASED_COMPILER_IS_ADSP
# define TEXTUREBASED_COMPILER_IS_ADSP 1

#elif defined(__IAR_SYSTEMS_ICC__ ) || defined(__IAR_SYSTEMS_ICC)
# undef TEXTUREBASED_COMPILER_IS_IAR
# define TEXTUREBASED_COMPILER_IS_IAR 1

#elif defined(_SGI_COMPILER_VERSION) || defined(_COMPILER_VERSION)
# undef TEXTUREBASED_COMPILER_IS_MIPSpro
# define TEXTUREBASED_COMPILER_IS_MIPSpro 1


#endif

#  if TEXTUREBASED_COMPILER_IS_AppleClang

#    if !(((__clang_major__ * 100) + __clang_minor__) >= 400)
#      error Unsupported compiler version
#    endif

# define TEXTUREBASED_COMPILER_VERSION_MAJOR (__clang_major__)
# define TEXTUREBASED_COMPILER_VERSION_MINOR (__clang_minor__)
# define TEXTUREBASED_COMPILER_VERSION_PATCH (__clang_patchlevel__)
# if defined(_MSC_VER)
   /* _MSC_VER = VVRR */
#  define TEXTUREBASED_SIMULATE_VERSION_MAJOR (_MSC_VER / 100)
#  define TEXTUREBASED_SIMULATE_VERSION_MINOR (_MSC_VER % 100)
# endif
# define TEXTUREBASED_COMPILER_VERSION_TWEAK (__apple_build_version__)

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_alignas)
#      define TEXTUREBASED_COMPILER_CXX_ALIGNAS 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_ALIGNAS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_alignas)
#      define TEXTUREBASED_COMPILER_CXX_ALIGNOF 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_ALIGNOF 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_constexpr)
#      define TEXTUREBASED_COMPILER_CXX_CONSTEXPR 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_CONSTEXPR 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_override_control)
#      define TEXTUREBASED_COMPILER_CXX_FINAL 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_FINAL 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_noexcept)
#      define TEXTUREBASED_COMPILER_CXX_NOEXCEPT 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_NOEXCEPT 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_nullptr)
#      define TEXTUREBASED_COMPILER_CXX_NULLPTR 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_NULLPTR 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __cplusplus >= 201103L
#      define TEXTUREBASED_COMPILER_CXX_SIZEOF_MEMBER 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_SIZEOF_MEMBER 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_thread_local)
#      define TEXTUREBASED_COMPILER_CXX_THREAD_LOCAL 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_THREAD_LOCAL 0
#    endif

#  elif TEXTUREBASED_COMPILER_IS_Clang

#    if !(((__clang_major__ * 100) + __clang_minor__) >= 304)
#      error Unsupported compiler version
#    endif

# define TEXTUREBASED_COMPILER_VERSION_MAJOR (__clang_major__)
# define TEXTUREBASED_COMPILER_VERSION_MINOR (__clang_minor__)
# define TEXTUREBASED_COMPILER_VERSION_PATCH (__clang_patchlevel__)
# if defined(_MSC_VER)
   /* _MSC_VER = VVRR */
#  define TEXTUREBASED_SIMULATE_VERSION_MAJOR (_MSC_VER / 100)
#  define TEXTUREBASED_SIMULATE_VERSION_MINOR (_MSC_VER % 100)
# endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 304 && __has_feature(cxx_alignas)
#      define TEXTUREBASED_COMPILER_CXX_ALIGNAS 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_ALIGNAS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 304 && __has_feature(cxx_alignas)
#      define TEXTUREBASED_COMPILER_CXX_ALIGNOF 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_ALIGNOF 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 304 && __has_feature(cxx_constexpr)
#      define TEXTUREBASED_COMPILER_CXX_CONSTEXPR 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_CONSTEXPR 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 304 && __has_feature(cxx_override_control)
#      define TEXTUREBASED_COMPILER_CXX_FINAL 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_FINAL 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 304 && __has_feature(cxx_noexcept)
#      define TEXTUREBASED_COMPILER_CXX_NOEXCEPT 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_NOEXCEPT 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 304 && __has_feature(cxx_nullptr)
#      define TEXTUREBASED_COMPILER_CXX_NULLPTR 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_NULLPTR 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 304 && __cplusplus >= 201103L
#      define TEXTUREBASED_COMPILER_CXX_SIZEOF_MEMBER 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_SIZEOF_MEMBER 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 304 && __has_feature(cxx_thread_local)
#      define TEXTUREBASED_COMPILER_CXX_THREAD_LOCAL 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_THREAD_LOCAL 0
#    endif

#  elif TEXTUREBASED_COMPILER_IS_GNU

#    if !((__GNUC__ * 100 + __GNUC_MINOR__) >= 404)
#      error Unsupported compiler version
#    endif

# define TEXTUREBASED_COMPILER_VERSION_MAJOR (__GNUC__)
# define TEXTUREBASED_COMPILER_VERSION_MINOR (__GNUC_MINOR__)
# if defined(__GNUC_PATCHLEVEL__)
#  define TEXTUREBASED_COMPILER_VERSION_PATCH (__GNUC_PATCHLEVEL__)
# endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 408 && __cplusplus >= 201103L
#      define TEXTUREBASED_COMPILER_CXX_ALIGNAS 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_ALIGNAS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 408 && __cplusplus >= 201103L
#      define TEXTUREBASED_COMPILER_CXX_ALIGNOF 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_ALIGNOF 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 406 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define TEXTUREBASED_COMPILER_CXX_CONSTEXPR 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_CONSTEXPR 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 407 && __cplusplus >= 201103L
#      define TEXTUREBASED_COMPILER_CXX_FINAL 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_FINAL 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 406 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define TEXTUREBASED_COMPILER_CXX_NOEXCEPT 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_NOEXCEPT 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 406 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define TEXTUREBASED_COMPILER_CXX_NULLPTR 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_NULLPTR 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define TEXTUREBASED_COMPILER_CXX_SIZEOF_MEMBER 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_SIZEOF_MEMBER 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 408 && __cplusplus >= 201103L
#      define TEXTUREBASED_COMPILER_CXX_THREAD_LOCAL 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_THREAD_LOCAL 0
#    endif

#  elif TEXTUREBASED_COMPILER_IS_MSVC

#    if !(_MSC_VER >= 1600)
#      error Unsupported compiler version
#    endif

  /* _MSC_VER = VVRR */
# define TEXTUREBASED_COMPILER_VERSION_MAJOR (_MSC_VER / 100)
# define TEXTUREBASED_COMPILER_VERSION_MINOR (_MSC_VER % 100)
# if defined(_MSC_FULL_VER)
#  if _MSC_VER >= 1400
    /* _MSC_FULL_VER = VVRRPPPPP */
#   define TEXTUREBASED_COMPILER_VERSION_PATCH (_MSC_FULL_VER % 100000)
#  else
    /* _MSC_FULL_VER = VVRRPPPP */
#   define TEXTUREBASED_COMPILER_VERSION_PATCH (_MSC_FULL_VER % 10000)
#  endif
# endif
# if defined(_MSC_BUILD)
#  define TEXTUREBASED_COMPILER_VERSION_TWEAK (_MSC_BUILD)
# endif

#    if _MSC_VER >= 1900
#      define TEXTUREBASED_COMPILER_CXX_ALIGNAS 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_ALIGNAS 0
#    endif

#    if _MSC_VER >= 1900
#      define TEXTUREBASED_COMPILER_CXX_ALIGNOF 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_ALIGNOF 0
#    endif

#    define TEXTUREBASED_COMPILER_CXX_CONSTEXPR 0

#    if _MSC_VER >= 1700
#      define TEXTUREBASED_COMPILER_CXX_FINAL 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_FINAL 0
#    endif

#    if _MSC_VER >= 1900
#      define TEXTUREBASED_COMPILER_CXX_NOEXCEPT 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_NOEXCEPT 0
#    endif

#    if _MSC_VER >= 1600
#      define TEXTUREBASED_COMPILER_CXX_NULLPTR 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_NULLPTR 0
#    endif

#    if _MSC_VER >= 1900
#      define TEXTUREBASED_COMPILER_CXX_SIZEOF_MEMBER 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_SIZEOF_MEMBER 0
#    endif

#    if _MSC_VER >= 1900
#      define TEXTUREBASED_COMPILER_CXX_THREAD_LOCAL 1
#    else
#      define TEXTUREBASED_COMPILER_CXX_THREAD_LOCAL 0
#    endif

#  else
#    error Unsupported compiler
#  endif

#  if TEXTUREBASED_COMPILER_CXX_ALIGNAS
#    define TEXTUREBASED_ALIGNAS(X) alignas(X)
#  elif TEXTUREBASED_COMPILER_IS_GNU || TEXTUREBASED_COMPILER_IS_Clang || TEXTUREBASED_COMPILER_IS_AppleClang
#    define TEXTUREBASED_ALIGNAS(X) __attribute__ ((__aligned__(X)))
#  elif TEXTUREBASED_COMPILER_IS_MSVC
#    define TEXTUREBASED_ALIGNAS(X) __declspec(align(X))
#  else
#    define TEXTUREBASED_ALIGNAS(X)
#  endif


#  if TEXTUREBASED_COMPILER_CXX_ALIGNOF
#    define TEXTUREBASED_ALIGNOF(X) alignof(X)
#  elif TEXTUREBASED_COMPILER_IS_GNU || TEXTUREBASED_COMPILER_IS_Clang || TEXTUREBASED_COMPILER_IS_AppleClang
#    define TEXTUREBASED_ALIGNOF(X) __alignof__(X)
#  elif TEXTUREBASED_COMPILER_IS_MSVC
#    define TEXTUREBASED_ALIGNOF(X) __alignof(X)
#  endif


#  if TEXTUREBASED_COMPILER_CXX_CONSTEXPR
#    define TEXTUREBASED_CONSTEXPR constexpr
#  else
#    define TEXTUREBASED_CONSTEXPR
#  endif


#  if TEXTUREBASED_COMPILER_CXX_FINAL
#    define TEXTUREBASED_FINAL final
#  else
#    define TEXTUREBASED_FINAL
#  endif


#  if TEXTUREBASED_COMPILER_CXX_NOEXCEPT
#    define TEXTUREBASED_NOEXCEPT noexcept
#    define TEXTUREBASED_NOEXCEPT_EXPR(X) noexcept(X)
#  else
#    define TEXTUREBASED_NOEXCEPT
#    define TEXTUREBASED_NOEXCEPT_EXPR(X)
#  endif


#  if TEXTUREBASED_COMPILER_CXX_NULLPTR
#    define TEXTUREBASED_NULLPTR nullptr
#  else
#    define TEXTUREBASED_NULLPTR static_cast<void*>(0)
#  endif


#  if TEXTUREBASED_COMPILER_CXX_THREAD_LOCAL
#    define TEXTUREBASED_THREAD_LOCAL thread_local
#  elif TEXTUREBASED_COMPILER_IS_GNU || TEXTUREBASED_COMPILER_IS_Clang || TEXTUREBASED_COMPILER_IS_AppleClang
#    define TEXTUREBASED_THREAD_LOCAL __thread
#  elif TEXTUREBASED_COMPILER_IS_MSVC
#    define TEXTUREBASED_THREAD_LOCAL __declspec(thread)
#  else
// TEXTUREBASED_THREAD_LOCAL not defined for this configuration.
#  endif

#endif

#endif

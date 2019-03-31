cmake_minimum_required(VERSION 3.13)
project(chapter1)

set(CMAKE_CXX_STANDARD 17)

add_executable(chapter1 "1.1 abcInt.cpp" "1.2 abcFloat.cpp" "1.3 abcTemplate.cpp" "1.4 abcRef.cpp" "1.5 abcConstRef.cpp" "1.6 abcGeneral.cpp"
        "1.7 noSwap.cpp" "1.29 factorial.cpp" "1.30 sum.cpp" "1.31 rSum.cpp" "1.32 permutations.cpp" "1.11 inlineSwap.cpp"
        "1.10 make2dArray.h" "1.11 make2dArrayNoCatch.h" "1.12 delete2dArray.h" "1.26 myException.h" "1.13-17 currency.h"
        "1.19-21 currencyNew.h" "1.22-23 currencyOverload.h" "1.24 currencyOverload.cpp" "1.25 currencyFriend.h" "1.27-28 abcException.cpp" "1.33 sumSTL.cpp" "1.34 productSTL.cpp" "1.35 permutationsSTL.cpp" "1.36 quardraticRoots.cpp" "1.37 indexOfMax.cpp")
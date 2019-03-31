cmake_minimum_required(VERSION 3.13)
project(chapter1)

set(CMAKE_CXX_STANDARD 17)

add_executable(chapter1 "1.1 abcInt.cpp" "1.2 abcFloat.cpp" "1.3 abcTemplate.cpp" "1.4 abcRef.cpp" "1.5 abcConstRef.cpp" "1.6 abcGeneral.cpp" "1.7 noSwap.cpp" "1.8-9 abcExceptionChar.cpp" "1.7 factorial.cpp" "1.8 sum.cpp" "1.9 rSum.cpp" "1.10 permutations.cpp" "1.11 inlineSwap.cpp" "1.10 make2dArray.h" "1.11 make2dArrayNoCatch.h" "1.12 delete2dArray.h" "1.26 myException.h" "1.13-17 currency.h" "1.18 currency.cpp")
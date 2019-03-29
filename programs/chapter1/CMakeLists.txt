cmake_minimum_required(VERSION 3.13)
project(chapter1)

set(CMAKE_CXX_STANDARD 17)

add_executable(chapter1 "1.1 abcInt.cpp" "1.2 abcFloat.cpp" "1.3 abcTemplate.cpp" "1.4 abcRef.cpp" "1.5 abcConstRef.cpp" "1.6 abcGeneral.cpp" "1.7 noSwap.cpp" "1.8 abcExceptionChar.cpp")
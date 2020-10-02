CMAKE_MINIMUM_REQUIRED(VERSION 3.8)
set(CMAKE_C_STANDARD 99)

find_package(LibOperations)

PROJECT(CExample_Vladislav_Razoronov_Var1 C)
SET(Example_files bzip2.c bzip2recover.c)

ADD_EXECUTABLE(Example ${Example_files})

TARGET_LINK_LIBRARIES(hello1 ${LibOperations_LIBRARIES})

target_include_directories(CExample_Vladislav_Razoronov_Var1 PRIVATE${LibOperations_INCLUDE_DIRS})
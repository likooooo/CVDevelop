cmake_minimum_required(VERSION 3.0.0)
project(CVDevelop VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)

set (PROJECT_DIR 
    ${CMAKE_SOURCE_DIR} 
)
set (RESOURCE_DIR
    ${PROJECT_DIR}/resource
)

set(RELEASE_PATH    ${PROJECT_DIR}/build/bin/${Path_Suffix})
set(LIB_Path        ${PROJECT_DIR}/build/lib/${Path_Suffix})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG 	${RELEASE_PATH})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE 	${RELEASE_PATH})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG 	${LIB_Path})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE 	${LIB_Path})

# include_directories(include)

option(ENABLE_GENRATE_PDB "option for genrate pdb file" ON)
if(ENABLE_GENRATE_PDB)
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Zi")
    set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} /DEBUG /OPT:REF /OPT:ICF")
    set(CMAKE_SHARED_LINKER_FLAGS_RELEASE "${CMAKE_SHARED_LINKER_FLAGS_RELEASE} /DEBUG /OPT:REF /OPT:ICF")
endif()

set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")

# 3rdparty
set(3rdparty_DIR 
    ${PROJECT_DIR}/3rdparty 
)
## OpenCV
set(OpenCVDir 
    ${3rdparty_DIR}/OpenCV/4.6.0
)
include_directories( ${OpenCVDir}/include )
link_directories( ${OpenCVDir}/lib/${CMAKE_BUILD_TYPE} )
file(COPY ${OpenCVDir}/bin/${CMAKE_BUILD_TYPE}/opencv_world460.dll DESTINATION ${RELEASE_PATH})
## Python
set(PythonDir 
    ${3rdparty_DIR}/Python/3.9.8
)
include_directories( ${PythonDir}/include )
link_directories( ${PythonDir}/libs )


add_subdirectory( sample )
set(simple_SOURCES
    simple.c
    ../../media/ooMediaLibIF.c
    )
   
include_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(${CMAKE_SOURCE_DIR}/src)
include_directories(${CMAKE_SOURCE_DIR}/src/h323_v6)
include_directories(${CMAKE_SOURCE_DIR}/src/h323)
include_directories(${CMAKE_SOURCE_DIR}/media)

if(COMMAND cmake_policy)
    cmake_policy(SET CMP0003 NEW)   
endif(COMMAND cmake_policy)

ADD_EXECUTABLE(simple
    ${simple_SOURCES}
    )

target_link_libraries(simple
    ooh323c
    ${CMAKE_THREAD_LIBS_INIT}
    ${CMAKE_DL_LIBS}
    )

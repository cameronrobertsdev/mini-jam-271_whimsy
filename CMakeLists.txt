cmake_minimum_required(VERSION 4.4.2)

project(whimsygame
    DESCRIPTION "A game made for Mini-Jam 271."
    LANGUAGES CXX C
    VERSION 0.01
)

if(EMSCRIPTEN)
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -s USE_GLFW=3 -s ASSERTIONS=1 -s WASM=1 -s ASYNCIFY -s GL_ENABLE_GET_PROC_ADDRESS=1")
    set(CMAKE_EXECUTABLE_SUFFIX ".html") # This line is used to set your executable to build with the emscripten html template so that you can directly open it.
endif()

add_subdirectory(include)

add_subdirectory(src)

target_link_libraries(App raylib)


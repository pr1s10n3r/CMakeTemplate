set(LibExampleName LibExample)
set(LibExampleSrc LibExample.cpp LibExample.hpp)

add_library(${LibExampleName} ${LibExampleSrc})
target_link_libraries(${LibExampleName} PRIVATE Qt5::Core)

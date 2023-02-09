set(ExecExampleName ExecExample)
set(ExecExampleSrc Main.cpp)

add_executable(${ExecExampleName} ${ExecExampleSrc})
target_link_libraries(${ExecExampleName} LibExample)
target_include_directories(${ExecExampleName} PRIVATE ${EXAMPLE_CORE_INCLUDE})
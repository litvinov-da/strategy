project(strategy)

file(GLOB_RECURSE HEADERS *.h)
file(GLOB_RECURSE SOURCES *.cpp)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})

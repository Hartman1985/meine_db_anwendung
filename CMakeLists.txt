cmake_minimum_required(VERSION 3.12)

# Add Project Attributes
project(CLI11-Demonstrator
          LANGUAGES CXX
          DESCRIPTION "Shows the integration of CLI11"
          HOMEPAGE_URL "http://vorlesung.nabla-b.engineering"
)

# Add CLI11 Library to Project
find_package(cli11 QUIET)
if(NOT cli11_FOUND)
    include(FetchContent)
    FetchContent_Declare(
        cli11
        GIT_REPOSITORY https://github.com/CLIUtils/CLI11
        GIT_TAG        main
    )
    FetchContent_MakeAvailable(cli11)
endif()

add_executable(${PROJECT_NAME}"${CMAKE_CURRENT_SOURCE_DIR} /src/cli_demo.cc")
target_link_libraries(${PROJECT_NAME} CLI11::CLI11 )

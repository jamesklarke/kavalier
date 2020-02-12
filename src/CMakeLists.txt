configure_file(${PROJECT_SOURCE_DIR}/include/kavalier/version.h.in ${PROJECT_SOURCE_DIR}/include/kavalier/version.h @ONLY)

add_library(libkavalier SHARED kavalier.cpp)
target_compile_features(libkavalier PUBLIC cxx_std_11)
set_target_properties(libkavalier PROPERTIES CXX_EXTENSIONS OFF)
target_include_directories(libkavalier PUBLIC ${PROJECT_SOURCE_DIR}/include/kavalier)




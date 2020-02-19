
set(CMAKE_BUILD_TYPE "Release")

set(BUILD_SHARED_LIBS "ON")

set(CMAKE_C_FLAGS "   -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wmissing-prototypes -Wstrict-prototypes -Wundef -Winit-self -Wpointer-arith -Wshadow -Wuninitialized -Winit-self -Wno-comment -Wimplicit-fallthrough=3 -Wno-strict-overflow -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -ffunction-sections -fdata-sections  -msse -msse2 -msse3 -fvisibility=hidden")

set(CMAKE_C_FLAGS_DEBUG "-g  -O0 -DDEBUG -D_DEBUG")

set(CMAKE_C_FLAGS_RELEASE "-O3 -DNDEBUG  -DNDEBUG")

set(CMAKE_CXX_FLAGS "   -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wundef -Winit-self -Wpointer-arith -Wshadow -Wsign-promo -Wuninitialized -Winit-self -Wsuggest-override -Wno-delete-non-virtual-dtor -Wno-comment -Wimplicit-fallthrough=3 -Wno-strict-overflow -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -ffunction-sections -fdata-sections  -msse -msse2 -msse3 -fvisibility=hidden -fvisibility-inlines-hidden")

set(CMAKE_CXX_FLAGS_DEBUG "-g  -O0 -DDEBUG -D_DEBUG")

set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG  -DNDEBUG")

set(CV_GCC "1")

set(CV_CLANG "")

set(ENABLE_NOISY_WARNINGS "OFF")

set(CMAKE_MODULE_LINKER_FLAGS "")

set(CMAKE_INSTALL_PREFIX "/usr/local")

set(OPENCV_PYTHON_INSTALL_PATH "")

set(OpenCV_SOURCE_DIR "/home/borg/404/scripts_robotica/OpenCV")

set(OPENCV_FORCE_PYTHON_LIBS "OFF")

set(OPENCV_PYTHON_SKIP_LINKER_EXCLUDE_LIBS "")

set(OPENCV_PYTHON_BINDINGS_DIR "/home/borg/404/scripts_robotica/OpenCV/build/modules/python_bindings_generator")

set(cv2_custom_hdr "/home/borg/404/scripts_robotica/OpenCV/build/modules/python_bindings_generator/pyopencv_custom_headers.h")

set(cv2_generated_files "/home/borg/404/scripts_robotica/OpenCV/build/modules/python_bindings_generator/pyopencv_generated_enums.h;/home/borg/404/scripts_robotica/OpenCV/build/modules/python_bindings_generator/pyopencv_generated_funcs.h;/home/borg/404/scripts_robotica/OpenCV/build/modules/python_bindings_generator/pyopencv_generated_include.h;/home/borg/404/scripts_robotica/OpenCV/build/modules/python_bindings_generator/pyopencv_generated_modules.h;/home/borg/404/scripts_robotica/OpenCV/build/modules/python_bindings_generator/pyopencv_generated_modules_content.h;/home/borg/404/scripts_robotica/OpenCV/build/modules/python_bindings_generator/pyopencv_generated_types.h;/home/borg/404/scripts_robotica/OpenCV/build/modules/python_bindings_generator/pyopencv_generated_types_content.h;/home/borg/404/scripts_robotica/OpenCV/build/modules/python_bindings_generator/pyopencv_signatures.json")

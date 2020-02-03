# CMake generated Testfile for 
# Source directory: /home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/phase_unwrapping
# Build directory: /home/borg/404/scripts_robotica/OpenCV/build/modules/phase_unwrapping
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_phase_unwrapping "/home/borg/404/scripts_robotica/OpenCV/build/bin/opencv_test_phase_unwrapping" "--gtest_output=xml:opencv_test_phase_unwrapping.xml")
set_tests_properties(opencv_test_phase_unwrapping PROPERTIES  LABELS "Extra;opencv_phase_unwrapping;Accuracy" WORKING_DIRECTORY "/home/borg/404/scripts_robotica/OpenCV/build/test-reports/accuracy")

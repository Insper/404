# CMake generated Testfile for 
# Source directory: /home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/cvv
# Build directory: /home/borg/404/scripts_robotica/OpenCV/build/modules/cvv
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_cvv "/home/borg/404/scripts_robotica/OpenCV/build/bin/opencv_test_cvv" "--gtest_output=xml:opencv_test_cvv.xml")
set_tests_properties(opencv_test_cvv PROPERTIES  LABELS "Extra;opencv_cvv;Accuracy" WORKING_DIRECTORY "/home/borg/404/scripts_robotica/OpenCV/build/test-reports/accuracy")

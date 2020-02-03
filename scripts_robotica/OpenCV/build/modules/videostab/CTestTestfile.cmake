# CMake generated Testfile for 
# Source directory: /home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/videostab
# Build directory: /home/borg/404/scripts_robotica/OpenCV/build/modules/videostab
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_videostab "/home/borg/404/scripts_robotica/OpenCV/build/bin/opencv_test_videostab" "--gtest_output=xml:opencv_test_videostab.xml")
set_tests_properties(opencv_test_videostab PROPERTIES  LABELS "Extra;opencv_videostab;Accuracy" WORKING_DIRECTORY "/home/borg/404/scripts_robotica/OpenCV/build/test-reports/accuracy")

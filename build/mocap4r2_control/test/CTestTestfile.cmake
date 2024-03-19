# CMake generated Testfile for 
# Source directory: /home/sofia/mocap4r2_ws/mocap4r2/mocap4r2_control/mocap4r2_control/test
# Build directory: /home/sofia/mocap4r2_ws/build/mocap4r2_control/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_control "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/sofia/mocap4r2_ws/build/mocap4r2_control/test_results/mocap4r2_control/test_control.gtest.xml" "--package-name" "mocap4r2_control" "--output-file" "/home/sofia/mocap4r2_ws/build/mocap4r2_control/ament_cmake_gtest/test_control.txt" "--command" "/home/sofia/mocap4r2_ws/build/mocap4r2_control/test/test_control" "--gtest_output=xml:/home/sofia/mocap4r2_ws/build/mocap4r2_control/test_results/mocap4r2_control/test_control.gtest.xml")
set_tests_properties(test_control PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/sofia/mocap4r2_ws/build/mocap4r2_control/test/test_control" TIMEOUT "60" WORKING_DIRECTORY "/home/sofia/mocap4r2_ws/build/mocap4r2_control/test" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/sofia/mocap4r2_ws/mocap4r2/mocap4r2_control/mocap4r2_control/test/CMakeLists.txt;1;ament_add_gtest;/home/sofia/mocap4r2_ws/mocap4r2/mocap4r2_control/mocap4r2_control/test/CMakeLists.txt;0;")
add_test(test_auxiliar "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/sofia/mocap4r2_ws/build/mocap4r2_control/test_results/mocap4r2_control/test_auxiliar.gtest.xml" "--package-name" "mocap4r2_control" "--output-file" "/home/sofia/mocap4r2_ws/build/mocap4r2_control/ament_cmake_gtest/test_auxiliar.txt" "--command" "/home/sofia/mocap4r2_ws/build/mocap4r2_control/test/test_auxiliar" "--gtest_output=xml:/home/sofia/mocap4r2_ws/build/mocap4r2_control/test_results/mocap4r2_control/test_auxiliar.gtest.xml")
set_tests_properties(test_auxiliar PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/sofia/mocap4r2_ws/build/mocap4r2_control/test/test_auxiliar" TIMEOUT "60" WORKING_DIRECTORY "/home/sofia/mocap4r2_ws/build/mocap4r2_control/test" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/sofia/mocap4r2_ws/mocap4r2/mocap4r2_control/mocap4r2_control/test/CMakeLists.txt;5;ament_add_gtest;/home/sofia/mocap4r2_ws/mocap4r2/mocap4r2_control/mocap4r2_control/test/CMakeLists.txt;0;")
subdirs("../gtest")
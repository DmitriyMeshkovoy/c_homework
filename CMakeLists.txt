cmake_minimum_required(VERSION 3.20)
project(c_homework C)

set(CMAKE_C_STANDARD 11)

# Привет гиту:
add_executable(task_first_git homework_test_git/task_first_git.c)

# HW 1
add_executable(hw1_task1 HW1/Hello.c)
add_executable(hw1_task2 HW1/ladder.c)
add_executable(hw1_task3 HW1/drawing.c)

# HW 3
add_executable(hw3_task1 HW3/sum.c)
add_executable(hw3_task2 HW3/mult.c)
add_executable(hw3_task3 HW3/avg.c)
add_executable(hw3_task4 HW3/sum_dig.c)
add_executable(hw3_task5 HW3/mult_dig.c)
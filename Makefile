classes: classes.hpp classes.cpp
  g++ -c classes.cpp classes.hpp -o classes.out -Wall
compile:  classes main.cpp
  g++ -c main.cpp -o main.exe

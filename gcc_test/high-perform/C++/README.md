#test project
This dir is aim for gtest and gmock
so How to use Gtest and Gmock?

1.git clone project
  or use "apt-get install libgtest-dev"
2.check lib/ and include/
  gtest lib and include
3.must move libgtest*.a into /usr/local/lib 
 
4.make some samples to check your env 


#Gtest project
How to complie gtest into your project

1.install gtest and gmock in your lib and include

2.check your lib and include 

3.use project samples check your env-path

4.use complier like this :
  4.1 comlile your code:
  clang++ -I ../include/ -c samples2.cc 
  clang++ -I ../include/ -c samples2_unittest.cc  
  4.2 link your .o 
  clang++ -I ../include samples2.o samples2_unittest.o gtest_main.a -lpthread -o test2
   


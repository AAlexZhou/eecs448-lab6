#include "test.h"
test::test()
{
}
test::~test()
{
}

void test::test1()
{
  Queue test;
  if (test.isEmpty())
  {
    std::cout << "Test 1: Newly created Queue is empty: PASSED" << '\n';
  }
  else
  {
    std::cout << "Test 1: Newly created Queue is empty: FAILED" << '\n';
  }
}
void test::test2()
{
  Queue test;
  test.enqueue(1);
  if (!test.isEmpty())
  {
    std::cout << "Test 2: Enqueing a value makes the Queue not empty: PASSED" << '\n';
    test.dequeue();
    if (test.isEmpty())
    {
      std::cout << "Test 3: dequeing a value make the Queue empty: PASSED" << '\n';
    }
    else
    {
      std::cout << "Test 3: dequeing a value make the Queue empty: FAILED" << '\n';
    }
  }
  else
  {
    std::cout << "Test 2: Enqueing a value makes the Queue not empty: FAILED" << '\n';
  }
}
void test::test3()
{
  Queue test;
  try
  {
    test.dequeue();
    std::cout << "TEST 4:dequeing the empty queue: FAILED" << '\n';
  }
  catch(std::runtime_error & t)
  {
    std::cout << "TEST 4:dequeing the empty queue: PASSED" << '\n';
  }
}
void test::test4()
{
  Queue test;
  try
  {
    test.peekFront();
    std::cout << "TEST 5:peek the empty queue: FAILED" << '\n';
  }
  catch(std::runtime_error & t)
  {
    std::cout << "TEST 5:peek the empty queue: PASSED" << '\n';
  }
  test.enqueue(1);
  if (test.peekFront()==1)
  {
    std::cout << "TEST 6:peek a Queue with one number: PASSED" << '\n';
  }
  else
  {
    std::cout << "TEST 6:peek a Queue with one number: FAILED" << '\n';
  }
}
void test::test5()
{
  Queue test;
  test.enqueue(1);
  test.enqueue(2);
  if (test.peekFront()==1)
  {
    std::cout << "Test 7: Enqueing values in order: PASSED" << '\n';
  }
  else
  {
    std::cout << "Test 7: Enqueing values in order: FAILED" << '\n';
  }
  test.dequeue();
  if (test.peekFront()==2)
  {
    std::cout << "Test 8: Dequeing values in order: PASSED" << '\n';
  }
  else
  {
    std::cout << "Test 8: Dequeing values in order: FAILED" << '\n';
  }
}
void test::test6()
{
  Queue test;
  test.enqueue(1);
  test.enqueue(2);
  if (test.peekFront()==1)
  {
    std::cout << "Test 9: peek values in order: PASSED" << '\n';
  }
  else
  {
    std::cout << "Test 9: peek values in order: FAILED" << '\n';
  }
}
void test::run()
{
  test1();
  test2();
  test3();
  test4();
  test5();
  test6();
}

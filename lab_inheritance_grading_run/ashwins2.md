


## Score: 70/90 (77.78%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor circle.cpp -o .objs/circle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor flower.cpp -o .objs/flower.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor line.cpp -o .objs/line.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor rectangle.cpp -o .objs/rectangle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor shape.cpp -o .objs/shape.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor triangle.cpp -o .objs/triangle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor truck.cpp -o .objs/truck.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor vector2.cpp -o .objs/vector2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/circle.o .objs/flower.o .objs/line.o .objs/rectangle.o .objs/shape.o .objs/triangle.o .objs/truck.o .objs/vector2.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [10/10] - test_virtual_perim

- **Points**: 10 / 10





### ✓ - [10/10] - test_virtual_area

- **Points**: 10 / 10





### ✓ - [20/20] - test_destructor

- **Points**: 20 / 20

```
==27339== Memcheck, a memory error detector
==27339== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27339== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27339== Command: ./test -r xml "test_destructor"
==27339== 
==27339== 
==27339== HEAP SUMMARY:
==27339==     in use at exit: 0 bytes in 0 blocks
==27339==   total heap usage: 1,667 allocs, 1,667 frees, 216,576 bytes allocated
==27339== 
==27339== All heap blocks were freed -- no leaks are possible
==27339== 
==27339== For counts of detected and suppressed errors, rerun with: -v
==27339== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_destructor" tags="[valgrind][weight=20]" filename="tests/tests.cpp" line="92">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [20/20] - test_constructor

- **Points**: 20 / 20





### ✓ - [10/10] - test_pure_virtual

- **Points**: 10 / 10

```
==27343== Memcheck, a memory error detector
==27343== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27343== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27343== Command: ./test -r xml "test_pure_virtual"
==27343== 
==27343== 
==27343== HEAP SUMMARY:
==27343==     in use at exit: 0 bytes in 0 blocks
==27343==   total heap usage: 1,728 allocs, 1,728 frees, 1,757,183 bytes allocated
==27343== 
==27343== All heap blocks were freed -- no leaks are possible
==27343== 
==27343== For counts of detected and suppressed errors, rerun with: -v
==27343== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_pure_virtual" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/20] - test_slicing

- **Points**: 0 / 20

```
==27347== Memcheck, a memory error detector
==27347== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27347== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27347== Command: ./test -r xml "test_slicing"
==27347== 
==27347== 
==27347== HEAP SUMMARY:
==27347==     in use at exit: 264 bytes in 7 blocks
==27347==   total heap usage: 1,794 allocs, 1,787 frees, 1,759,556 bytes allocated
==27347== 
==27347== 64 bytes in 1 blocks are definitely lost in loss record 5 of 7
==27347==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==27347==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==27347==    by 0x407A25: Flower::Flower(Vector2 const&) (flower.cpp:36)
==27347==    by 0x42BDA7: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:134)
==27347==    by 0x460CE2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==27347==    by 0x451436: Catch::TestCase::invoke() const (catch.hpp:10793)
==27347==    by 0x45136C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==27347==    by 0x44D8C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==27347==    by 0x44BE9E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==27347==    by 0x455236: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==27347==    by 0x453ED2: Catch::Session::runInternal() (catch.hpp:10149)
==27347==    by 0x453B9A: Catch::Session::run() (catch.hpp:10106)
==27347== 
==27347== 64 bytes in 1 blocks are definitely lost in loss record 6 of 7
==27347==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==27347==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==27347==    by 0x407A8C: Flower::Flower(Vector2 const&) (flower.cpp:38)
==27347==    by 0x42BDA7: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:134)
==27347==    by 0x460CE2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==27347==    by 0x451436: Catch::TestCase::invoke() const (catch.hpp:10793)
==27347==    by 0x45136C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==27347==    by 0x44D8C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==27347==    by 0x44BE9E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==27347==    by 0x455236: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==27347==    by 0x453ED2: Catch::Session::runInternal() (catch.hpp:10149)
==27347==    by 0x453B9A: Catch::Session::run() (catch.hpp:10106)
==27347== 
==27347== 136 (64 direct, 72 indirect) bytes in 1 blocks are definitely lost in loss record 7 of 7
==27347==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==27347==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==27347==    by 0x407BB9: Flower::Flower(Vector2 const&) (flower.cpp:44)
==27347==    by 0x42BDA7: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:134)
==27347==    by 0x460CE2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==27347==    by 0x451436: Catch::TestCase::invoke() const (catch.hpp:10793)
==27347==    by 0x45136C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==27347==    by 0x44D8C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==27347==    by 0x44BE9E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==27347==    by 0x455236: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==27347==    by 0x453ED2: Catch::Session::runInternal() (catch.hpp:10149)
==27347==    by 0x453B9A: Catch::Session::run() (catch.hpp:10106)
==27347== 
==27347== LEAK SUMMARY:
==27347==    definitely lost: 192 bytes in 3 blocks
==27347==    indirectly lost: 72 bytes in 4 blocks
==27347==      possibly lost: 0 bytes in 0 blocks
==27347==    still reachable: 0 bytes in 0 blocks
==27347==         suppressed: 0 bytes in 0 blocks
==27347== 
==27347== For counts of detected and suppressed errors, rerun with: -v
==27347== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_slicing" tags="[valgrind][weight=20]" filename="tests/tests.cpp" line="125">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **ashwins2** using **28c6c66105bcc2e65282e3c7165977eb54500aff** (from **February 16th 2020, 11:59:59 pm**)

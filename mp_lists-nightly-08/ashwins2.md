


## Score: 109/109 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/test_part2_extra.cpp -o .objs/tests/test_part2_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/test_part2_extra.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [5/5] - List::reverse

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #2

- **Points**: 5 / 5





### ✓ - [10/10] - List::merge

- **Points**: 10 / 10

```
==8868== Memcheck, a memory error detector
==8868== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8868== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8868== Command: ./test -r xml "List::merge"
==8868== 
==8868== 
==8868== HEAP SUMMARY:
==8868==     in use at exit: 0 bytes in 0 blocks
==8868==   total heap usage: 243,308 allocs, 243,308 frees, 79,504,945 bytes allocated
==8868== 
==8868== All heap blocks were freed -- no leaks are possible
==8868== 
==8868== For counts of detected and suppressed errors, rerun with: -v
==8868== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #1

- **Points**: 2 / 2

```
==8879== Memcheck, a memory error detector
==8879== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8879== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8879== Command: ./test -r xml "List::sort\ simple\ #1"
==8879== 
==8879== 
==8879== HEAP SUMMARY:
==8879==     in use at exit: 0 bytes in 0 blocks
==8879==   total heap usage: 2,202 allocs, 2,202 frees, 263,672 bytes allocated
==8879== 
==8879== All heap blocks were freed -- no leaks are possible
==8879== 
==8879== For counts of detected and suppressed errors, rerun with: -v
==8879== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #2

- **Points**: 2 / 2

```
==8884== Memcheck, a memory error detector
==8884== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8884== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8884== Command: ./test -r xml "List::sort\ simple\ #2"
==8884== 
==8884== 
==8884== HEAP SUMMARY:
==8884==     in use at exit: 0 bytes in 0 blocks
==8884==   total heap usage: 2,202 allocs, 2,202 frees, 263,720 bytes allocated
==8884== 
==8884== All heap blocks were freed -- no leaks are possible
==8884== 
==8884== For counts of detected and suppressed errors, rerun with: -v
==8884== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::sort #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::sort #2

- **Points**: 5 / 5





### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==8894== Memcheck, a memory error detector
==8894== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8894== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8894== Command: ./test -r xml "List::insertFront\ size"
==8894== 
==8894== 
==8894== HEAP SUMMARY:
==8894==     in use at exit: 0 bytes in 0 blocks
==8894==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==8894== 
==8894== All heap blocks were freed -- no leaks are possible
==8894== 
==8894== For counts of detected and suppressed errors, rerun with: -v
==8894== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertFront size" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="20">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::insertBack size

- **Points**: 2 / 2

```
==8897== Memcheck, a memory error detector
==8897== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8897== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8897== Command: ./test -r xml "List::insertBack\ size"
==8897== 
==8897== 
==8897== HEAP SUMMARY:
==8897==     in use at exit: 0 bytes in 0 blocks
==8897==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==8897== 
==8897== All heap blocks were freed -- no leaks are possible
==8897== 
==8897== For counts of detected and suppressed errors, rerun with: -v
==8897== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertBack size" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1.cpp" line="28">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents

- **Points**: 4 / 4

```
==8900== Memcheck, a memory error detector
==8900== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8900== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8900== Command: ./test -r xml "List::insert\ contents"
==8900== 
==8900== 
==8900== HEAP SUMMARY:
==8900==     in use at exit: 0 bytes in 0 blocks
==8900==   total heap usage: 2,343 allocs, 2,343 frees, 268,176 bytes allocated
==8900== 
==8900== All heap blocks were freed -- no leaks are possible
==8900== 
==8900== For counts of detected and suppressed errors, rerun with: -v
==8900== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1.cpp" line="36">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::triplerotate basic

- **Points**: 5 / 5

```
==8904== Memcheck, a memory error detector
==8904== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8904== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8904== Command: ./test -r xml "List::triplerotate\ basic"
==8904== 
==8904== 
==8904== HEAP SUMMARY:
==8904==     in use at exit: 0 bytes in 0 blocks
==8904==   total heap usage: 2,351 allocs, 2,351 frees, 268,464 bytes allocated
==8904== 
==8904== All heap blocks were freed -- no leaks are possible
==8904== 
==8904== For counts of detected and suppressed errors, rerun with: -v
==8904== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::triplerotate basic" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="52">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - List::triplerotate simple

- **Points**: 10 / 10

```
==8907== Memcheck, a memory error detector
==8907== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8907== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8907== Command: ./test -r xml "List::triplerotate\ simple"
==8907== 
==8907== 
==8907== HEAP SUMMARY:
==8907==     in use at exit: 0 bytes in 0 blocks
==8907==   total heap usage: 2,355 allocs, 2,355 frees, 268,560 bytes allocated
==8907== 
==8907== All heap blocks were freed -- no leaks are possible
==8907== 
==8907== For counts of detected and suppressed errors, rerun with: -v
==8907== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::triplerotate simple" tags="[part=1][valgrind][weight=10]" filename="tests/tests_part1.cpp" line="67">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==8910== Memcheck, a memory error detector
==8910== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8910== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8910== Command: ./test -r xml "List::split\ simple"
==8910== 
==8910== 
==8910== HEAP SUMMARY:
==8910==     in use at exit: 0 bytes in 0 blocks
==8910==   total heap usage: 2,205 allocs, 2,205 frees, 263,744 bytes allocated
==8910== 
==8910== All heap blocks were freed -- no leaks are possible
==8910== 
==8910== For counts of detected and suppressed errors, rerun with: -v
==8910== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==8914== Memcheck, a memory error detector
==8914== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8914== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8914== Command: ./test -r xml "List::_destroy\ empty\ list"
==8914== 
==8914== 
==8914== HEAP SUMMARY:
==8914==     in use at exit: 0 bytes in 0 blocks
==8914==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==8914== 
==8914== All heap blocks were freed -- no leaks are possible
==8914== 
==8914== For counts of detected and suppressed errors, rerun with: -v
==8914== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::_destroy empty list" tags="[part=1][valgrind][weight=3]" filename="tests/tests_part1.cpp" line="159">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::begin() returns an iterator to the front of the list

- **Points**: 1 / 1

```
==8918== Memcheck, a memory error detector
==8918== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8918== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8918== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==8918== 
==8918== 
==8918== HEAP SUMMARY:
==8918==     in use at exit: 0 bytes in 0 blocks
==8918==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==8918== 
==8918== All heap blocks were freed -- no leaks are possible
==8918== 
==8918== For counts of detected and suppressed errors, rerun with: -v
==8918== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::begin() returns an iterator to the front of the list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="170">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 1 / 1

```
==8921== Memcheck, a memory error detector
==8921== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8921== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8921== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==8921== 
==8921== 
==8921== HEAP SUMMARY:
==8921==     in use at exit: 0 bytes in 0 blocks
==8921==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==8921== 
==8921== All heap blocks were freed -- no leaks are possible
==8921== 
==8921== For counts of detected and suppressed errors, rerun with: -v
==8921== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (pre-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="178">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 1 / 1

```
==8924== Memcheck, a memory error detector
==8924== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8924== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8924== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==8924== 
==8924== 
==8924== HEAP SUMMARY:
==8924==     in use at exit: 0 bytes in 0 blocks
==8924==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==8924== 
==8924== All heap blocks were freed -- no leaks are possible
==8924== 
==8924== For counts of detected and suppressed errors, rerun with: -v
==8924== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (post-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="187">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==8927== Memcheck, a memory error detector
==8927== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8927== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8927== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==8927== 
==8927== 
==8927== HEAP SUMMARY:
==8927==     in use at exit: 0 bytes in 0 blocks
==8927==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==8927== 
==8927== All heap blocks were freed -- no leaks are possible
==8927== 
==8927== For counts of detected and suppressed errors, rerun with: -v
==8927== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="197">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 1 / 1

```
==8931== Memcheck, a memory error detector
==8931== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8931== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8931== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==8931== 
==8931== 
==8931== HEAP SUMMARY:
==8931==     in use at exit: 0 bytes in 0 blocks
==8931==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==8931== 
==8931== All heap blocks were freed -- no leaks are possible
==8931== 
==8931== For counts of detected and suppressed errors, rerun with: -v
==8931== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- moves the iterator backwards" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="207">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==8934== Memcheck, a memory error detector
==8934== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8934== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8934== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==8934== 
==8934== 
==8934== HEAP SUMMARY:
==8934==     in use at exit: 0 bytes in 0 blocks
==8934==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==8934== 
==8934== All heap blocks were freed -- no leaks are possible
==8934== 
==8934== For counts of detected and suppressed errors, rerun with: -v
==8934== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="219">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is reached

- **Points**: 1 / 1

```
==8937== Memcheck, a memory error detector
==8937== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8937== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8937== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==8937== 
==8937== 
==8937== HEAP SUMMARY:
==8937==     in use at exit: 0 bytes in 0 blocks
==8937==   total heap usage: 2,352 allocs, 2,352 frees, 270,872 bytes allocated
==8937== 
==8937== All heap blocks were freed -- no leaks are possible
==8937== 
==8937== For counts of detected and suppressed errors, rerun with: -v
==8937== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is reached" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="232">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 1 / 1

```
==8941== Memcheck, a memory error detector
==8941== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8941== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8941== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==8941== 
==8941== 
==8941== HEAP SUMMARY:
==8941==     in use at exit: 0 bytes in 0 blocks
==8941==   total heap usage: 2,352 allocs, 2,352 frees, 273,272 bytes allocated
==8941== 
==8941== All heap blocks were freed -- no leaks are possible
==8941== 
==8941== For counts of detected and suppressed errors, rerun with: -v
==8941== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is not ::begin in a non-empty list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="246">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::reverse simple

- **Points**: 4 / 4

```
==8944== Memcheck, a memory error detector
==8944== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8944== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8944== Command: ./test -r xml "List::reverse\ simple"
==8944== 
==8944== 
==8944== HEAP SUMMARY:
==8944==     in use at exit: 0 bytes in 0 blocks
==8944==   total heap usage: 2,208 allocs, 2,208 frees, 263,852 bytes allocated
==8944== 
==8944== All heap blocks were freed -- no leaks are possible
==8944== 
==8944== For counts of detected and suppressed errors, rerun with: -v
==8944== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==8947== Memcheck, a memory error detector
==8947== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8947== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8947== Command: ./test -r xml "List::reverse\ edge\ cases"
==8947== 
==8947== 
==8947== HEAP SUMMARY:
==8947==     in use at exit: 0 bytes in 0 blocks
==8947==   total heap usage: 2,353 allocs, 2,353 frees, 268,552 bytes allocated
==8947== 
==8947== All heap blocks were freed -- no leaks are possible
==8947== 
==8947== For counts of detected and suppressed errors, rerun with: -v
==8947== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse edge cases" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="31">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::reverseNth #3

- **Points**: 5 / 5

```
==8951== Memcheck, a memory error detector
==8951== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8951== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8951== Command: ./test -r xml "List::reverseNth\ #3"
==8951== 
==8951== 
==8951== HEAP SUMMARY:
==8951==     in use at exit: 0 bytes in 0 blocks
==8951==   total heap usage: 2,214 allocs, 2,214 frees, 264,032 bytes allocated
==8951== 
==8951== All heap blocks were freed -- no leaks are possible
==8951== 
==8951== For counts of detected and suppressed errors, rerun with: -v
==8951== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::merge #2

- **Points**: 5 / 5

```
==8954== Memcheck, a memory error detector
==8954== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8954== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8954== Command: ./test -r xml "List::merge\ #2"
==8954== 
==8954== 
==8954== HEAP SUMMARY:
==8954==     in use at exit: 0 bytes in 0 blocks
==8954==   total heap usage: 2,243 allocs, 2,243 frees, 265,808 bytes allocated
==8954== 
==8954== All heap blocks were freed -- no leaks are possible
==8954== 
==8954== For counts of detected and suppressed errors, rerun with: -v
==8954== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #3

- **Points**: 2 / 2

```
==8957== Memcheck, a memory error detector
==8957== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8957== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8957== Command: ./test -r xml "List::sort\ simple\ #3"
==8957== 
==8957== 
==8957== HEAP SUMMARY:
==8957==     in use at exit: 0 bytes in 0 blocks
==8957==   total heap usage: 2,205 allocs, 2,205 frees, 263,784 bytes allocated
==8957== 
==8957== All heap blocks were freed -- no leaks are possible
==8957== 
==8957== For counts of detected and suppressed errors, rerun with: -v
==8957== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==8961== Memcheck, a memory error detector
==8961== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8961== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8961== Command: ./test -r xml "List::insert\ contents\ #2"
==8961== 
==8961== 
==8961== HEAP SUMMARY:
==8961==     in use at exit: 0 bytes in 0 blocks
==8961==   total heap usage: 2,358 allocs, 2,358 frees, 268,672 bytes allocated
==8961== 
==8961== All heap blocks were freed -- no leaks are possible
==8961== 
==8961== For counts of detected and suppressed errors, rerun with: -v
==8961== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents #2" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1_extra.cpp" line="14">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split edge cases

- **Points**: 5 / 5

```
==8964== Memcheck, a memory error detector
==8964== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8964== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8964== Command: ./test -r xml "List::split\ edge\ cases"
==8964== 
==8964== 
==8964== HEAP SUMMARY:
==8964==     in use at exit: 0 bytes in 0 blocks
==8964==   total heap usage: 2,348 allocs, 2,348 frees, 268,336 bytes allocated
==8964== 
==8964== All heap blocks were freed -- no leaks are possible
==8964== 
==8964== For counts of detected and suppressed errors, rerun with: -v
==8964== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **ashwins2** using **e760c80a572a10e80749cdf5181ad51d8469c3f2** (from **March 2nd 2020, 11:59:59 pm**)

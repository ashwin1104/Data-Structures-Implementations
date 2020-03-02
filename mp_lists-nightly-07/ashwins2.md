


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
==15203== Memcheck, a memory error detector
==15203== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15203== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15203== Command: ./test -r xml "List::merge"
==15203== 
==15203== 
==15203== HEAP SUMMARY:
==15203==     in use at exit: 0 bytes in 0 blocks
==15203==   total heap usage: 243,308 allocs, 243,308 frees, 79,504,945 bytes allocated
==15203== 
==15203== All heap blocks were freed -- no leaks are possible
==15203== 
==15203== For counts of detected and suppressed errors, rerun with: -v
==15203== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15259== Memcheck, a memory error detector
==15259== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15259== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15259== Command: ./test -r xml "List::sort\ simple\ #1"
==15259== 
==15259== 
==15259== HEAP SUMMARY:
==15259==     in use at exit: 0 bytes in 0 blocks
==15259==   total heap usage: 2,202 allocs, 2,202 frees, 263,672 bytes allocated
==15259== 
==15259== All heap blocks were freed -- no leaks are possible
==15259== 
==15259== For counts of detected and suppressed errors, rerun with: -v
==15259== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15264== Memcheck, a memory error detector
==15264== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15264== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15264== Command: ./test -r xml "List::sort\ simple\ #2"
==15264== 
==15264== 
==15264== HEAP SUMMARY:
==15264==     in use at exit: 0 bytes in 0 blocks
==15264==   total heap usage: 2,202 allocs, 2,202 frees, 263,720 bytes allocated
==15264== 
==15264== All heap blocks were freed -- no leaks are possible
==15264== 
==15264== For counts of detected and suppressed errors, rerun with: -v
==15264== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15275== Memcheck, a memory error detector
==15275== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15275== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15275== Command: ./test -r xml "List::insertFront\ size"
==15275== 
==15275== 
==15275== HEAP SUMMARY:
==15275==     in use at exit: 0 bytes in 0 blocks
==15275==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==15275== 
==15275== All heap blocks were freed -- no leaks are possible
==15275== 
==15275== For counts of detected and suppressed errors, rerun with: -v
==15275== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15278== Memcheck, a memory error detector
==15278== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15278== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15278== Command: ./test -r xml "List::insertBack\ size"
==15278== 
==15278== 
==15278== HEAP SUMMARY:
==15278==     in use at exit: 0 bytes in 0 blocks
==15278==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==15278== 
==15278== All heap blocks were freed -- no leaks are possible
==15278== 
==15278== For counts of detected and suppressed errors, rerun with: -v
==15278== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15284== Memcheck, a memory error detector
==15284== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15284== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15284== Command: ./test -r xml "List::insert\ contents"
==15284== 
==15284== 
==15284== HEAP SUMMARY:
==15284==     in use at exit: 0 bytes in 0 blocks
==15284==   total heap usage: 2,343 allocs, 2,343 frees, 268,176 bytes allocated
==15284== 
==15284== All heap blocks were freed -- no leaks are possible
==15284== 
==15284== For counts of detected and suppressed errors, rerun with: -v
==15284== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15287== Memcheck, a memory error detector
==15287== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15287== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15287== Command: ./test -r xml "List::triplerotate\ basic"
==15287== 
==15287== 
==15287== HEAP SUMMARY:
==15287==     in use at exit: 0 bytes in 0 blocks
==15287==   total heap usage: 2,351 allocs, 2,351 frees, 268,464 bytes allocated
==15287== 
==15287== All heap blocks were freed -- no leaks are possible
==15287== 
==15287== For counts of detected and suppressed errors, rerun with: -v
==15287== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15290== Memcheck, a memory error detector
==15290== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15290== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15290== Command: ./test -r xml "List::triplerotate\ simple"
==15290== 
==15290== 
==15290== HEAP SUMMARY:
==15290==     in use at exit: 0 bytes in 0 blocks
==15290==   total heap usage: 2,355 allocs, 2,355 frees, 268,560 bytes allocated
==15290== 
==15290== All heap blocks were freed -- no leaks are possible
==15290== 
==15290== For counts of detected and suppressed errors, rerun with: -v
==15290== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15293== Memcheck, a memory error detector
==15293== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15293== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15293== Command: ./test -r xml "List::split\ simple"
==15293== 
==15293== 
==15293== HEAP SUMMARY:
==15293==     in use at exit: 0 bytes in 0 blocks
==15293==   total heap usage: 2,205 allocs, 2,205 frees, 263,744 bytes allocated
==15293== 
==15293== All heap blocks were freed -- no leaks are possible
==15293== 
==15293== For counts of detected and suppressed errors, rerun with: -v
==15293== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15329== Memcheck, a memory error detector
==15329== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15329== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15329== Command: ./test -r xml "List::_destroy\ empty\ list"
==15329== 
==15329== 
==15329== HEAP SUMMARY:
==15329==     in use at exit: 0 bytes in 0 blocks
==15329==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==15329== 
==15329== All heap blocks were freed -- no leaks are possible
==15329== 
==15329== For counts of detected and suppressed errors, rerun with: -v
==15329== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15343== Memcheck, a memory error detector
==15343== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15343== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15343== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==15343== 
==15343== 
==15343== HEAP SUMMARY:
==15343==     in use at exit: 0 bytes in 0 blocks
==15343==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==15343== 
==15343== All heap blocks were freed -- no leaks are possible
==15343== 
==15343== For counts of detected and suppressed errors, rerun with: -v
==15343== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15377== Memcheck, a memory error detector
==15377== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15377== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15377== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==15377== 
==15377== 
==15377== HEAP SUMMARY:
==15377==     in use at exit: 0 bytes in 0 blocks
==15377==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==15377== 
==15377== All heap blocks were freed -- no leaks are possible
==15377== 
==15377== For counts of detected and suppressed errors, rerun with: -v
==15377== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15386== Memcheck, a memory error detector
==15386== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15386== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15386== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==15386== 
==15386== 
==15386== HEAP SUMMARY:
==15386==     in use at exit: 0 bytes in 0 blocks
==15386==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==15386== 
==15386== All heap blocks were freed -- no leaks are possible
==15386== 
==15386== For counts of detected and suppressed errors, rerun with: -v
==15386== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15393== Memcheck, a memory error detector
==15393== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15393== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15393== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==15393== 
==15393== 
==15393== HEAP SUMMARY:
==15393==     in use at exit: 0 bytes in 0 blocks
==15393==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==15393== 
==15393== All heap blocks were freed -- no leaks are possible
==15393== 
==15393== For counts of detected and suppressed errors, rerun with: -v
==15393== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15399== Memcheck, a memory error detector
==15399== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15399== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15399== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==15399== 
==15399== 
==15399== HEAP SUMMARY:
==15399==     in use at exit: 0 bytes in 0 blocks
==15399==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==15399== 
==15399== All heap blocks were freed -- no leaks are possible
==15399== 
==15399== For counts of detected and suppressed errors, rerun with: -v
==15399== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15407== Memcheck, a memory error detector
==15407== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15407== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15407== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==15407== 
==15407== 
==15407== HEAP SUMMARY:
==15407==     in use at exit: 0 bytes in 0 blocks
==15407==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==15407== 
==15407== All heap blocks were freed -- no leaks are possible
==15407== 
==15407== For counts of detected and suppressed errors, rerun with: -v
==15407== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15410== Memcheck, a memory error detector
==15410== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15410== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15410== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==15410== 
==15410== 
==15410== HEAP SUMMARY:
==15410==     in use at exit: 0 bytes in 0 blocks
==15410==   total heap usage: 2,352 allocs, 2,352 frees, 270,872 bytes allocated
==15410== 
==15410== All heap blocks were freed -- no leaks are possible
==15410== 
==15410== For counts of detected and suppressed errors, rerun with: -v
==15410== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15413== Memcheck, a memory error detector
==15413== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15413== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15413== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==15413== 
==15413== 
==15413== HEAP SUMMARY:
==15413==     in use at exit: 0 bytes in 0 blocks
==15413==   total heap usage: 2,352 allocs, 2,352 frees, 273,272 bytes allocated
==15413== 
==15413== All heap blocks were freed -- no leaks are possible
==15413== 
==15413== For counts of detected and suppressed errors, rerun with: -v
==15413== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15416== Memcheck, a memory error detector
==15416== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15416== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15416== Command: ./test -r xml "List::reverse\ simple"
==15416== 
==15416== 
==15416== HEAP SUMMARY:
==15416==     in use at exit: 0 bytes in 0 blocks
==15416==   total heap usage: 2,208 allocs, 2,208 frees, 263,852 bytes allocated
==15416== 
==15416== All heap blocks were freed -- no leaks are possible
==15416== 
==15416== For counts of detected and suppressed errors, rerun with: -v
==15416== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15421== Memcheck, a memory error detector
==15421== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15421== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15421== Command: ./test -r xml "List::reverse\ edge\ cases"
==15421== 
==15421== 
==15421== HEAP SUMMARY:
==15421==     in use at exit: 0 bytes in 0 blocks
==15421==   total heap usage: 2,353 allocs, 2,353 frees, 268,552 bytes allocated
==15421== 
==15421== All heap blocks were freed -- no leaks are possible
==15421== 
==15421== For counts of detected and suppressed errors, rerun with: -v
==15421== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15424== Memcheck, a memory error detector
==15424== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15424== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15424== Command: ./test -r xml "List::reverseNth\ #3"
==15424== 
==15424== 
==15424== HEAP SUMMARY:
==15424==     in use at exit: 0 bytes in 0 blocks
==15424==   total heap usage: 2,214 allocs, 2,214 frees, 264,032 bytes allocated
==15424== 
==15424== All heap blocks were freed -- no leaks are possible
==15424== 
==15424== For counts of detected and suppressed errors, rerun with: -v
==15424== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15427== Memcheck, a memory error detector
==15427== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15427== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15427== Command: ./test -r xml "List::merge\ #2"
==15427== 
==15427== 
==15427== HEAP SUMMARY:
==15427==     in use at exit: 0 bytes in 0 blocks
==15427==   total heap usage: 2,243 allocs, 2,243 frees, 265,808 bytes allocated
==15427== 
==15427== All heap blocks were freed -- no leaks are possible
==15427== 
==15427== For counts of detected and suppressed errors, rerun with: -v
==15427== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15455== Memcheck, a memory error detector
==15455== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15455== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15455== Command: ./test -r xml "List::sort\ simple\ #3"
==15455== 
==15455== 
==15455== HEAP SUMMARY:
==15455==     in use at exit: 0 bytes in 0 blocks
==15455==   total heap usage: 2,205 allocs, 2,205 frees, 263,784 bytes allocated
==15455== 
==15455== All heap blocks were freed -- no leaks are possible
==15455== 
==15455== For counts of detected and suppressed errors, rerun with: -v
==15455== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15461== Memcheck, a memory error detector
==15461== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15461== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15461== Command: ./test -r xml "List::insert\ contents\ #2"
==15461== 
==15461== 
==15461== HEAP SUMMARY:
==15461==     in use at exit: 0 bytes in 0 blocks
==15461==   total heap usage: 2,358 allocs, 2,358 frees, 268,672 bytes allocated
==15461== 
==15461== All heap blocks were freed -- no leaks are possible
==15461== 
==15461== For counts of detected and suppressed errors, rerun with: -v
==15461== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15466== Memcheck, a memory error detector
==15466== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15466== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==15466== Command: ./test -r xml "List::split\ edge\ cases"
==15466== 
==15466== 
==15466== HEAP SUMMARY:
==15466==     in use at exit: 0 bytes in 0 blocks
==15466==   total heap usage: 2,348 allocs, 2,348 frees, 268,336 bytes allocated
==15466== 
==15466== All heap blocks were freed -- no leaks are possible
==15466== 
==15466== For counts of detected and suppressed errors, rerun with: -v
==15466== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **ashwins2** using **1f346dd6e36ffdd69b6b435b7210f6f40a62141a** (from **March 1st 2020, 11:59:59 pm**)




## Score: 49/109 (44.95%)


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


### ✗ - [0/5] - List::reverse

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #1

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #2

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/10] - List::merge

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <Info>
        Output image `out` saved as actual-merge.png
      </Info>
      <Expression success="false" type="REQUIRE" filename="tests/tests_part2.cpp" line="90">
        <Original>
          out == expected
        </Original>
        <Expanded>
          PNG(w=600, h=400, hash=0)
==
PNG(w=600, h=400, hash=0)
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #1

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="93">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #2

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="108">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::sort #1

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/5] - List::sort #2

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==36069== Memcheck, a memory error detector
==36069== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==36069== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==36069== Command: ./test -r xml "List::insertFront\ size"
==36069== 
==36069== 
==36069== HEAP SUMMARY:
==36069==     in use at exit: 0 bytes in 0 blocks
==36069==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==36069== 
==36069== All heap blocks were freed -- no leaks are possible
==36069== 
==36069== For counts of detected and suppressed errors, rerun with: -v
==36069== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==36095== Memcheck, a memory error detector
==36095== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==36095== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==36095== Command: ./test -r xml "List::insertBack\ size"
==36095== 
==36095== 
==36095== HEAP SUMMARY:
==36095==     in use at exit: 0 bytes in 0 blocks
==36095==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==36095== 
==36095== All heap blocks were freed -- no leaks are possible
==36095== 
==36095== For counts of detected and suppressed errors, rerun with: -v
==36095== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==36603== Memcheck, a memory error detector
==36603== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==36603== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==36603== Command: ./test -r xml "List::insert\ contents"
==36603== 
==36603== 
==36603== HEAP SUMMARY:
==36603==     in use at exit: 0 bytes in 0 blocks
==36603==   total heap usage: 2,343 allocs, 2,343 frees, 268,176 bytes allocated
==36603== 
==36603== All heap blocks were freed -- no leaks are possible
==36603== 
==36603== For counts of detected and suppressed errors, rerun with: -v
==36603== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==36642== Memcheck, a memory error detector
==36642== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==36642== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==36642== Command: ./test -r xml "List::triplerotate\ basic"
==36642== 
==36642== 
==36642== HEAP SUMMARY:
==36642==     in use at exit: 0 bytes in 0 blocks
==36642==   total heap usage: 2,351 allocs, 2,351 frees, 268,464 bytes allocated
==36642== 
==36642== All heap blocks were freed -- no leaks are possible
==36642== 
==36642== For counts of detected and suppressed errors, rerun with: -v
==36642== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==36665== Memcheck, a memory error detector
==36665== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==36665== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==36665== Command: ./test -r xml "List::triplerotate\ simple"
==36665== 
==36665== 
==36665== HEAP SUMMARY:
==36665==     in use at exit: 0 bytes in 0 blocks
==36665==   total heap usage: 2,355 allocs, 2,355 frees, 268,560 bytes allocated
==36665== 
==36665== All heap blocks were freed -- no leaks are possible
==36665== 
==36665== For counts of detected and suppressed errors, rerun with: -v
==36665== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37116== Memcheck, a memory error detector
==37116== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37116== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37116== Command: ./test -r xml "List::split\ simple"
==37116== 
==37116== 
==37116== HEAP SUMMARY:
==37116==     in use at exit: 0 bytes in 0 blocks
==37116==   total heap usage: 2,205 allocs, 2,205 frees, 263,744 bytes allocated
==37116== 
==37116== All heap blocks were freed -- no leaks are possible
==37116== 
==37116== For counts of detected and suppressed errors, rerun with: -v
==37116== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37211== Memcheck, a memory error detector
==37211== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37211== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37211== Command: ./test -r xml "List::_destroy\ empty\ list"
==37211== 
==37211== 
==37211== HEAP SUMMARY:
==37211==     in use at exit: 0 bytes in 0 blocks
==37211==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==37211== 
==37211== All heap blocks were freed -- no leaks are possible
==37211== 
==37211== For counts of detected and suppressed errors, rerun with: -v
==37211== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37251== Memcheck, a memory error detector
==37251== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37251== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37251== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==37251== 
==37251== 
==37251== HEAP SUMMARY:
==37251==     in use at exit: 0 bytes in 0 blocks
==37251==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==37251== 
==37251== All heap blocks were freed -- no leaks are possible
==37251== 
==37251== For counts of detected and suppressed errors, rerun with: -v
==37251== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37256== Memcheck, a memory error detector
==37256== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37256== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37256== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==37256== 
==37256== 
==37256== HEAP SUMMARY:
==37256==     in use at exit: 0 bytes in 0 blocks
==37256==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==37256== 
==37256== All heap blocks were freed -- no leaks are possible
==37256== 
==37256== For counts of detected and suppressed errors, rerun with: -v
==37256== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37266== Memcheck, a memory error detector
==37266== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37266== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37266== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==37266== 
==37266== 
==37266== HEAP SUMMARY:
==37266==     in use at exit: 0 bytes in 0 blocks
==37266==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==37266== 
==37266== All heap blocks were freed -- no leaks are possible
==37266== 
==37266== For counts of detected and suppressed errors, rerun with: -v
==37266== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37298== Memcheck, a memory error detector
==37298== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37298== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37298== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==37298== 
==37298== 
==37298== HEAP SUMMARY:
==37298==     in use at exit: 0 bytes in 0 blocks
==37298==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==37298== 
==37298== All heap blocks were freed -- no leaks are possible
==37298== 
==37298== For counts of detected and suppressed errors, rerun with: -v
==37298== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37312== Memcheck, a memory error detector
==37312== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37312== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37312== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==37312== 
==37312== 
==37312== HEAP SUMMARY:
==37312==     in use at exit: 0 bytes in 0 blocks
==37312==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==37312== 
==37312== All heap blocks were freed -- no leaks are possible
==37312== 
==37312== For counts of detected and suppressed errors, rerun with: -v
==37312== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37363== Memcheck, a memory error detector
==37363== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37363== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37363== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==37363== 
==37363== 
==37363== HEAP SUMMARY:
==37363==     in use at exit: 0 bytes in 0 blocks
==37363==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==37363== 
==37363== All heap blocks were freed -- no leaks are possible
==37363== 
==37363== For counts of detected and suppressed errors, rerun with: -v
==37363== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37398== Memcheck, a memory error detector
==37398== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37398== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37398== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==37398== 
==37398== 
==37398== HEAP SUMMARY:
==37398==     in use at exit: 0 bytes in 0 blocks
==37398==   total heap usage: 2,352 allocs, 2,352 frees, 270,872 bytes allocated
==37398== 
==37398== All heap blocks were freed -- no leaks are possible
==37398== 
==37398== For counts of detected and suppressed errors, rerun with: -v
==37398== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37412== Memcheck, a memory error detector
==37412== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37412== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37412== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==37412== 
==37412== 
==37412== HEAP SUMMARY:
==37412==     in use at exit: 0 bytes in 0 blocks
==37412==   total heap usage: 2,352 allocs, 2,352 frees, 273,272 bytes allocated
==37412== 
==37412== All heap blocks were freed -- no leaks are possible
==37412== 
==37412== For counts of detected and suppressed errors, rerun with: -v
==37412== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/4] - List::reverse simple

- **Points**: 0 / 4


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="28">
        <Original>
          "&lt; 4 12 -1 99 3 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 12 -1 99 3 >" == "&lt; 3 99 -1 12 4 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==37430== Memcheck, a memory error detector
==37430== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37430== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37430== Command: ./test -r xml "List::reverse\ edge\ cases"
==37430== 
==37430== 
==37430== HEAP SUMMARY:
==37430==     in use at exit: 0 bytes in 0 blocks
==37430==   total heap usage: 2,353 allocs, 2,353 frees, 268,552 bytes allocated
==37430== 
==37430== All heap blocks were freed -- no leaks are possible
==37430== 
==37430== For counts of detected and suppressed errors, rerun with: -v
==37430== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/5] - List::reverseNth #3

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="59">
        <Original>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >"
==
"&lt; 1 2 3 4 5 6 7 8 9 10 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::merge #2

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <Info>
        Does not empty out the parameter list
      </Info>
      <Info>
        Does not empty out the parameter list
      </Info>
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="84">
        <Original>
          "&lt; 1 2 10 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >" == s1.str()
        </Original>
        <Expanded>
          "&lt; 1 2 10 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >"
==
"&lt; >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="2" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #3

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
      <FatalErrorCondition filename="tests/test_part2_extra.cpp" line="87">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==37516== Memcheck, a memory error detector
==37516== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37516== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37516== Command: ./test -r xml "List::insert\ contents\ #2"
==37516== 
==37516== 
==37516== HEAP SUMMARY:
==37516==     in use at exit: 0 bytes in 0 blocks
==37516==   total heap usage: 2,358 allocs, 2,358 frees, 268,672 bytes allocated
==37516== 
==37516== All heap blocks were freed -- no leaks are possible
==37516== 
==37516== For counts of detected and suppressed errors, rerun with: -v
==37516== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/5] - List::split edge cases

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <FatalErrorCondition filename="tests/tests_part1_extra.cpp" line="30">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **ashwins2** using **de1f74396f9fb6cbf60613025d40f7e164369fb6** (from **February 24th 2020, 11:59:59 pm**)

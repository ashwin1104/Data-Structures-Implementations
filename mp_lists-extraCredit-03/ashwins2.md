


## Score: 47/52 (90.38%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==25320== Memcheck, a memory error detector
==25320== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25320== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25320== Command: ./test -r xml "List::insertFront\ size"
==25320== 
==25320== 
==25320== HEAP SUMMARY:
==25320==     in use at exit: 0 bytes in 0 blocks
==25320==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==25320== 
==25320== All heap blocks were freed -- no leaks are possible
==25320== 
==25320== For counts of detected and suppressed errors, rerun with: -v
==25320== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25351== Memcheck, a memory error detector
==25351== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25351== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25351== Command: ./test -r xml "List::insertBack\ size"
==25351== 
==25351== 
==25351== HEAP SUMMARY:
==25351==     in use at exit: 0 bytes in 0 blocks
==25351==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==25351== 
==25351== All heap blocks were freed -- no leaks are possible
==25351== 
==25351== For counts of detected and suppressed errors, rerun with: -v
==25351== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25359== Memcheck, a memory error detector
==25359== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25359== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25359== Command: ./test -r xml "List::insert\ contents"
==25359== 
==25359== 
==25359== HEAP SUMMARY:
==25359==     in use at exit: 0 bytes in 0 blocks
==25359==   total heap usage: 2,128 allocs, 2,128 frees, 252,304 bytes allocated
==25359== 
==25359== All heap blocks were freed -- no leaks are possible
==25359== 
==25359== For counts of detected and suppressed errors, rerun with: -v
==25359== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25366== Memcheck, a memory error detector
==25366== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25366== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25366== Command: ./test -r xml "List::triplerotate\ basic"
==25366== 
==25366== 
==25366== HEAP SUMMARY:
==25366==     in use at exit: 0 bytes in 0 blocks
==25366==   total heap usage: 2,136 allocs, 2,136 frees, 252,592 bytes allocated
==25366== 
==25366== All heap blocks were freed -- no leaks are possible
==25366== 
==25366== For counts of detected and suppressed errors, rerun with: -v
==25366== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25373== Memcheck, a memory error detector
==25373== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25373== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25373== Command: ./test -r xml "List::triplerotate\ simple"
==25373== 
==25373== 
==25373== HEAP SUMMARY:
==25373==     in use at exit: 0 bytes in 0 blocks
==25373==   total heap usage: 2,140 allocs, 2,140 frees, 252,688 bytes allocated
==25373== 
==25373== All heap blocks were freed -- no leaks are possible
==25373== 
==25373== For counts of detected and suppressed errors, rerun with: -v
==25373== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25381== Memcheck, a memory error detector
==25381== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25381== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25381== Command: ./test -r xml "List::split\ simple"
==25381== 
==25381== 
==25381== HEAP SUMMARY:
==25381==     in use at exit: 0 bytes in 0 blocks
==25381==   total heap usage: 1,990 allocs, 1,990 frees, 247,872 bytes allocated
==25381== 
==25381== All heap blocks were freed -- no leaks are possible
==25381== 
==25381== For counts of detected and suppressed errors, rerun with: -v
==25381== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25396== Memcheck, a memory error detector
==25396== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25396== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25396== Command: ./test -r xml "List::_destroy\ empty\ list"
==25396== 
==25396== 
==25396== HEAP SUMMARY:
==25396==     in use at exit: 0 bytes in 0 blocks
==25396==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==25396== 
==25396== All heap blocks were freed -- no leaks are possible
==25396== 
==25396== For counts of detected and suppressed errors, rerun with: -v
==25396== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25401== Memcheck, a memory error detector
==25401== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25401== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25401== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==25401== 
==25401== 
==25401== HEAP SUMMARY:
==25401==     in use at exit: 0 bytes in 0 blocks
==25401==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==25401== 
==25401== All heap blocks were freed -- no leaks are possible
==25401== 
==25401== For counts of detected and suppressed errors, rerun with: -v
==25401== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25406== Memcheck, a memory error detector
==25406== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25406== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25406== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==25406== 
==25406== 
==25406== HEAP SUMMARY:
==25406==     in use at exit: 0 bytes in 0 blocks
==25406==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==25406== 
==25406== All heap blocks were freed -- no leaks are possible
==25406== 
==25406== For counts of detected and suppressed errors, rerun with: -v
==25406== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25415== Memcheck, a memory error detector
==25415== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25415== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25415== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==25415== 
==25415== 
==25415== HEAP SUMMARY:
==25415==     in use at exit: 0 bytes in 0 blocks
==25415==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==25415== 
==25415== All heap blocks were freed -- no leaks are possible
==25415== 
==25415== For counts of detected and suppressed errors, rerun with: -v
==25415== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25420== Memcheck, a memory error detector
==25420== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25420== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25420== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==25420== 
==25420== 
==25420== HEAP SUMMARY:
==25420==     in use at exit: 0 bytes in 0 blocks
==25420==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==25420== 
==25420== All heap blocks were freed -- no leaks are possible
==25420== 
==25420== For counts of detected and suppressed errors, rerun with: -v
==25420== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25425== Memcheck, a memory error detector
==25425== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25425== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25425== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==25425== 
==25425== 
==25425== HEAP SUMMARY:
==25425==     in use at exit: 0 bytes in 0 blocks
==25425==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==25425== 
==25425== All heap blocks were freed -- no leaks are possible
==25425== 
==25425== For counts of detected and suppressed errors, rerun with: -v
==25425== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25433== Memcheck, a memory error detector
==25433== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25433== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25433== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==25433== 
==25433== 
==25433== HEAP SUMMARY:
==25433==     in use at exit: 0 bytes in 0 blocks
==25433==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==25433== 
==25433== All heap blocks were freed -- no leaks are possible
==25433== 
==25433== For counts of detected and suppressed errors, rerun with: -v
==25433== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25438== Memcheck, a memory error detector
==25438== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25438== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25438== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==25438== 
==25438== 
==25438== HEAP SUMMARY:
==25438==     in use at exit: 0 bytes in 0 blocks
==25438==   total heap usage: 2,137 allocs, 2,137 frees, 255,000 bytes allocated
==25438== 
==25438== All heap blocks were freed -- no leaks are possible
==25438== 
==25438== For counts of detected and suppressed errors, rerun with: -v
==25438== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25485== Memcheck, a memory error detector
==25485== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25485== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25485== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==25485== 
==25485== 
==25485== HEAP SUMMARY:
==25485==     in use at exit: 0 bytes in 0 blocks
==25485==   total heap usage: 2,137 allocs, 2,137 frees, 257,400 bytes allocated
==25485== 
==25485== All heap blocks were freed -- no leaks are possible
==25485== 
==25485== For counts of detected and suppressed errors, rerun with: -v
==25485== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==25495== Memcheck, a memory error detector
==25495== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25495== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25495== Command: ./test -r xml "List::insert\ contents\ #2"
==25495== 
==25495== 
==25495== HEAP SUMMARY:
==25495==     in use at exit: 0 bytes in 0 blocks
==25495==   total heap usage: 2,143 allocs, 2,143 frees, 252,800 bytes allocated
==25495== 
==25495== All heap blocks were freed -- no leaks are possible
==25495== 
==25495== For counts of detected and suppressed errors, rerun with: -v
==25495== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **ashwins2** using **aececee4d900bb7f86d760896cea2d3cde28be48** (from **February 26th 2020, 11:59:59 pm**)

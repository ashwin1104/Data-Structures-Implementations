


## Score: 58/61 (95.08%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c Image.cpp -o .objs/Image.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c StickerSheet.cpp -o .objs/StickerSheet.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-part1.cpp -o .objs/tests/tests-part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-part2.cpp -o .objs/tests/tests-part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/Image.o .objs/StickerSheet.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-part1.o .objs/tests/tests-part2.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - Image lighten() lightens pixels by 0.1

- **Points**: 1 / 1





### ✓ - [1/1] - Image lighten() does not lighten a pixel above 1.0

- **Points**: 1 / 1





### ✓ - [1/1] - Image darken(0.2) darkens pixels by 0.2

- **Points**: 1 / 1





### ✓ - [1/1] - Image darken(0.2) does not darken a pixel below 0.0

- **Points**: 1 / 1





### ✓ - [1/1] - Image saturate() saturates a pixels by 0.1

- **Points**: 1 / 1





### ✓ - [1/1] - Image rotateColor(double) rotates the color

- **Points**: 1 / 1





### ✓ - [1/1] - Image rotateColor(double) keeps the hue in the range 0..360

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(2.0) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(0.5) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(2) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(0.5) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(10000\, 200) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(720\, 10000) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(240\, 50) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(180\, 80) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(10000\, 200) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(720\, 10000) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(240\, 50) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(180\, 80) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [3/3] - Image doesn't have any memory erorrs

- **Points**: 3 / 3

```
==8631== Memcheck, a memory error detector
==8631== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8631== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8631== Command: ./test -r xml "Image\ doesn't\ have\ any\ memory\ erorrs"
==8631== 
==8631== 
==8631== HEAP SUMMARY:
==8631==     in use at exit: 0 bytes in 0 blocks
==8631==   total heap usage: 2,589 allocs, 2,589 frees, 333,480 bytes allocated
==8631== 
==8631== All heap blocks were freed -- no leaks are possible
==8631== 
==8631== For counts of detected and suppressed errors, rerun with: -v
==8631== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Image doesn't have any memory erorrs" tags="[part=1][valgrind][weight=3]" filename="tests/tests-part1.cpp" line="231">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - A basic StickerSheet works

- **Points**: 5 / 5





### ✓ - [1/1] - StickerSheet::changeMaxStickers() does not discard stickers when resized larger

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::changeMaxStickers() does not discard original stickers when resized smaller

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::changeMaxStickers() can increase the number of stickers on an image

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::changeMaxStickers() discards stickers beyond the end of a smaller StickerSheet

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::removeSticker() can remove the last sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::removeSticker() can remove the first sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::removeSticker() can remove all stickers

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::getSticker() returns the sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::getSticker() returns NULL for a non-existant sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::getSticker() returns NULL for a removed sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::translate() translates a sticker's location

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::translate() returns false for a non-existant sticker

- **Points**: 1 / 1





### ✓ - [5/5] - A complex StickerSheet is correct

- **Points**: 5 / 5





### ✓ - [2/2] - StickerSheet's copy constructor makes an independent copy

- **Points**: 2 / 2





### ✓ - [2/2] - StickerSheet's assignment operator makes an independent copy

- **Points**: 2 / 2





### ✗ - [0/3] - StickerSheet doesn't have any memory errors

- **Points**: 0 / 3

```
==8963== Memcheck, a memory error detector
==8963== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8963== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8963== Command: ./test -r xml "StickerSheet\ doesn't\ have\ any\ memory\ errors"
==8963== 
==8963== 
==8963== HEAP SUMMARY:
==8963==     in use at exit: 69,120,064 bytes in 8 blocks
==8963==   total heap usage: 3,467 allocs, 3,459 frees, 288,736,231 bytes allocated
==8963== 
==8963== 16 bytes in 1 blocks are definitely lost in loss record 1 of 8
==8963==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==8963==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==8963==    by 0x4094E3: StickerSheet::StickerSheet(Image const&, unsigned int) (StickerSheet.cpp:8)
==8963==    by 0x4336B1: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:284)
==8963==    by 0x46B4F2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8963==    by 0x45BC46: Catch::TestCase::invoke() const (catch.hpp:10793)
==8963==    by 0x45BB7C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8963==    by 0x4580D6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8963==    by 0x4566AE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8963==    by 0x45FA46: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8963==    by 0x45E6E2: Catch::Session::runInternal() (catch.hpp:10149)
==8963==    by 0x45E3AA: Catch::Session::run() (catch.hpp:10106)
==8963== 
==8963== 16 bytes in 1 blocks are definitely lost in loss record 2 of 8
==8963==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==8963==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==8963==    by 0x4094E3: StickerSheet::StickerSheet(Image const&, unsigned int) (StickerSheet.cpp:8)
==8963==    by 0x433716: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:291)
==8963==    by 0x46B4F2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8963==    by 0x45BC46: Catch::TestCase::invoke() const (catch.hpp:10793)
==8963==    by 0x45BB7C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8963==    by 0x4580D6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8963==    by 0x4566AE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8963==    by 0x45FA46: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8963==    by 0x45E6E2: Catch::Session::runInternal() (catch.hpp:10149)
==8963==    by 0x45E3AA: Catch::Session::run() (catch.hpp:10106)
==8963== 
==8963== 17,280,000 bytes in 1 blocks are possibly lost in loss record 3 of 8
==8963==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==8963==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==8963==    by 0x40BB59: cs225::PNG::_copy(cs225::PNG const&) (PNG.cpp:35)
==8963==    by 0x40BDBF: cs225::PNG::PNG(cs225::PNG const&) (PNG.cpp:55)
==8963==    by 0x40A7B7: Image::Image(Image const&) (Image.h:4)
==8963==    by 0x409500: StickerSheet::StickerSheet(Image const&, unsigned int) (StickerSheet.cpp:8)
==8963==    by 0x4336B1: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:284)
==8963==    by 0x46B4F2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8963==    by 0x45BC46: Catch::TestCase::invoke() const (catch.hpp:10793)
==8963==    by 0x45BB7C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8963==    by 0x4580D6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8963==    by 0x4566AE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8963== 
==8963== 17,280,000 bytes in 1 blocks are possibly lost in loss record 4 of 8
==8963==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==8963==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==8963==    by 0x40BB59: cs225::PNG::_copy(cs225::PNG const&) (PNG.cpp:35)
==8963==    by 0x40BDBF: cs225::PNG::PNG(cs225::PNG const&) (PNG.cpp:55)
==8963==    by 0x40A7B7: Image::Image(Image const&) (Image.h:4)
==8963==    by 0x409500: StickerSheet::StickerSheet(Image const&, unsigned int) (StickerSheet.cpp:8)
==8963==    by 0x433716: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:291)
==8963==    by 0x46B4F2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8963==    by 0x45BC46: Catch::TestCase::invoke() const (catch.hpp:10793)
==8963==    by 0x45BB7C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8963==    by 0x4580D6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8963==    by 0x4566AE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8963== 
==8963== 17,280,016 (16 direct, 17,280,000 indirect) bytes in 1 blocks are definitely lost in loss record 7 of 8
==8963==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==8963==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==8963==    by 0x409877: StickerSheet::_copy(StickerSheet const&) (StickerSheet.cpp:36)
==8963==    by 0x40982C: StickerSheet::StickerSheet(StickerSheet const&) (StickerSheet.cpp:25)
==8963==    by 0x4336FC: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:288)
==8963==    by 0x46B4F2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8963==    by 0x45BC46: Catch::TestCase::invoke() const (catch.hpp:10793)
==8963==    by 0x45BB7C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8963==    by 0x4580D6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8963==    by 0x4566AE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8963==    by 0x45FA46: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8963==    by 0x45E6E2: Catch::Session::runInternal() (catch.hpp:10149)
==8963== 
==8963== 17,280,016 (16 direct, 17,280,000 indirect) bytes in 1 blocks are definitely lost in loss record 8 of 8
==8963==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==8963==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==8963==    by 0x409877: StickerSheet::_copy(StickerSheet const&) (StickerSheet.cpp:36)
==8963==    by 0x409B2C: StickerSheet::operator=(StickerSheet const&) (StickerSheet.cpp:29)
==8963==    by 0x43372E: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:292)
==8963==    by 0x46B4F2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==8963==    by 0x45BC46: Catch::TestCase::invoke() const (catch.hpp:10793)
==8963==    by 0x45BB7C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==8963==    by 0x4580D6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==8963==    by 0x4566AE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==8963==    by 0x45FA46: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==8963==    by 0x45E6E2: Catch::Session::runInternal() (catch.hpp:10149)
==8963== 
==8963== LEAK SUMMARY:
==8963==    definitely lost: 64 bytes in 4 blocks
==8963==    indirectly lost: 34,560,000 bytes in 2 blocks
==8963==      possibly lost: 34,560,000 bytes in 2 blocks
==8963==    still reachable: 0 bytes in 0 blocks
==8963==         suppressed: 0 bytes in 0 blocks
==8963== 
==8963== For counts of detected and suppressed errors, rerun with: -v
==8963== ERROR SUMMARY: 6 errors from 6 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="StickerSheet doesn't have any memory errors" tags="[part=2][timeout=20000][valgrind][weight=3]" filename="tests/tests-part2.cpp" line="279">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - myImage.png exists and contains stickers

- **Points**: 10 / 10





---

This report was generated for **ashwins2** using **28c6c66105bcc2e65282e3c7165977eb54500aff** (from **February 18th 2020, 11:59:59 pm**)

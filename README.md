# strategyPattern
This is an exemple of strategyPattern implementation in c++ in the form of some animals.

## design
![alt text](https://github.com/Vidicon/strategyPattern/raw/master/strategyPattern.png "uml class diagram")


## compile and run
git and cmake are needed, install them if you dont have them:
```
sudo apt install git cmake
```

Clone git to pc (linux):
```
git clone https://github.com/Vidicon/strategyPattern.git 
cd strategyPattern
```

Generate makefile using Cmake:

```
cmake CMakeLists.txt
```
Make the project:
```
make
```
Run the project:
```
./strategyPattern
```

## Valgrind
valgrind shows this program is memory leak free.

you can run it to see for your self: (you need to install it using "sudo apt install valgrind")
```
valgrind ./strategyPattern
```
output:
```
==21720== HEAP SUMMARY:
==21720==     in use at exit: 72,704 bytes in 1 blocks
==21720==   total heap usage: 52 allocs, 51 frees, 74,747 bytes allocated
==21720== 
==21720== LEAK SUMMARY:
==21720==    definitely lost: 0 bytes in 0 blocks
==21720==    indirectly lost: 0 bytes in 0 blocks
==21720==      possibly lost: 0 bytes in 0 blocks
==21720==    still reachable: 72,704 bytes in 1 blocks
==21720==         suppressed: 0 bytes in 0 blocks
==21720== Rerun with --leak-check=full to see details of leaked memory
==21720== 
==21720== For counts of detected and suppressed errors, rerun with: -v
==21720== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

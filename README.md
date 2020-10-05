QJsonSerializer
===============

Summary
-------
A library for serializing and deserializing complex Qt object graphs to and from JSON

Installation
-----------

Linux:

```
mkdir build.release
cd build.release
cmake ..
make
sudo make install
```

Windows (MSVC):

```
mkdir build.release
cd build.release
cmake ..
nmake
nmake install
```

Windows (MinGW):

```
mkdir build.release
cd build.release
cmake ..
mingw32-make
mingw32-make install
```

Getting started
------------

```
find_package(QJsonSerializer)
....
target_link_libraries(YouProjectTarget PRIVATE QJsonSerializer::QJsonSerializer)
```

```C++
#include <QJsonSerializer>
```

See the test cases for code examples.

What works
----------

* Serialization and deserialization of complex object graphs, including nested objects and collections 

What does not work
------------------

* Serialization and deserialization of polymorphic objects is currently untested.

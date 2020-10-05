
find_package(Qt5 COMPONENTS Test)
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(SERIALIZERTESTS_SOURCES SerializerTests.cpp
							Entity.cpp
							Child.cpp
							GadgetEntity.cpp
							GadgetChild.cpp)
						
set(SERIALIZERTESTS_HEADERS Entity.h 
							Child.h
							GadgetEntity.h
							GadgetChild.h)
							
add_executable(SerializerTests ${SERIALIZERTESTS_SOURCES} ${SERIALIZERTESTS_HEADERS})

target_compile_features(SerializerTests PRIVATE cxx_std_11)
target_include_directories(SerializerTests PUBLIC ${PROJECT_SOURCE_DIR}/tests)

target_link_libraries(SerializerTests PUBLIC Qt5::Test QJsonSerializer)
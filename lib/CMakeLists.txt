
find_package(Qt5 COMPONENTS Core)
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(QJSONSERIALIZER_SOURCES DeserializerBase.cpp
						SerializerBase.cpp
						QJsonSerializer.cpp)
						
set(QJSONSERIALIZER_HEADERS Array.h
							DeserializerBase.h
							IDeserializer.h
							QJsonSerializer
							QJsonSerializer.h
							SerializerBase.h
							ISerializer.h
							IObjectFactory.h)
							
add_library(QJsonSerializer SHARED ${QJSONSERIALIZER_SOURCES} ${QJSONSERIALIZER_HEADERS})

target_compile_features(QJsonSerializer PRIVATE cxx_std_11)
target_include_directories(QJsonSerializer PUBLIC ${PROJECT_SOURCE_DIR}/lib)

target_link_libraries(QJsonSerializer PUBLIC Qt5::Core)

export(TARGETS QJsonSerializer NAMESPACE QJsonSerializer:: FILE QJsonSerializerTargets.cmake)
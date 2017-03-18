cmake_minimum_required(VERSION 3.4)
project(Issue1394 C)

# NOTE: This CMake file is just for syntax highlighting in CLion

include_directories(/usr/local/share/php)
include_directories(/usr/local/share/php/TSRM)
include_directories(/usr/local/share/php/Zend)
include_directories(/usr/local/share/php/ext)
include_directories(/usr/local/share/php/main)
include_directories(/usr/local/share/php/sapi)
include_directories(./ext/kernel)
include_directories(./ext/kernel/extended)

set(SOURCE_FILES
        ext/ext.h
        ext/ext_config.h
        ext/group.c
        ext/group.h
        ext/php_ext.h
        ext/php_group.h
)

add_executable(Issue1394 ${SOURCE_FILES})

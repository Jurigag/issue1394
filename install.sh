#!/usr/bin/env bash

INI_DIR=$(php -i | grep "Scan this dir for additional" | awk -F'=>' '{print $2}')

sudo ulimit -c unlimited || true
echo "memory_limit=-1" | sudo tee ${INI_DIR}/000-initial.ini

cd ext

export CC="gcc"
export CFLAGS="-O0 -g3 -Wall -std=gnu90 -fvisibility=hidden -DZEPHIR_RELEASE=0"

if [ -f Makefile ]; then
	make --silent clean
	phpize --silent --clean
fi

phpize --silent
./configure --silent --enable-group

make --silent
sudo make --silent -j"$(getconf _NPROCESSORS_ONLN)" install

echo "extension=group.so" | sudo tee ${INI_DIR}/100-group.ini

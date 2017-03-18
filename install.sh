#!/usr/bin/env bash

INI_DIR=$(php -i | grep "Scan this dir for additional" | awk -F'=>' '{print $2}')
PHPIZE_BIN=`which phpize`
PHPCONFIG_BIN=`which php-config`

sudo ulimit -c unlimited || true

echo '/tmp/core_%e.%p' | sudo tee /proc/sys/kernel/core_pattern &> /dev/null
echo "memory_limit=-1" | sudo tee ${INI_DIR}/000-initial.ini

cd ext

export CC="gcc"
export CFLAGS="-O0 -g3 -Wall -std=gnu90 -fvisibility=hidden -DZEPHIR_RELEASE=1"

if [ -f Makefile ]; then
	make --silent clean
	${PHPIZE_BIN} --clean
fi

${PHPIZE_BIN} --silent
./configure --silent --with-php-config=${PHPCONFIG_BIN} --enable-group

make --silent
sudo make --silent -j"$(getconf _NPROCESSORS_ONLN)" install

echo "extension=group.so" | sudo tee ${INI_DIR}/100-group.ini

#!/usr/bin/env bash

cd ext

export CC="gcc"
export CFLAGS="-O0 -g3 -Wall -fvisibility=hidden -DZEPHIR_RELEASE=0" # -std=gnu90

if [ -f Makefile ]; then
	make --silent clean
	#/usr/bin/phpize --silent --clean
	/usr/local/bin/phpize --silent --clean
fi

#/usr/bin/phpize --silent
#./configure --silent --with-php-config=/usr/bin/php-config --enable-group
/usr/local/bin/phpize --silent
./configure --silent --with-php-config=/usr/local/bin/php-config --enable-group

make --silent
make --silent -j"$(getconf _NPROCESSORS_ONLN)" install

#echo memory_limit=-1 > /etc/php/7.1/cli/conf.d/000-initial.ini
#echo extension=group.so > /etc/php/7.1/cli/conf.d/100-group.ini

echo memory_limit=-1 > /usr/local/etc/php/conf.d/000-initial.ini
echo extension=group.so > /usr/local/etc/php/conf.d/100-group.ini

ulimit -c unlimited

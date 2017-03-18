
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"


ZEPHIR_INIT_CLASS(Group_Oo) {

	ZEPHIR_REGISTER_CLASS(Group, Oo, group, oo, group_oo_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Group_Oo, testInstance1) {

	zval o;
	ZEPHIR_INIT_THIS();

	ZVAL_UNDEF(&o);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&o);
	object_init(&o);
	RETURN_CCTOR(o);

}

PHP_METHOD(Group_Oo, testInstance12) {

	zval o;
	int ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	ZEPHIR_INIT_THIS();

	ZVAL_UNDEF(&o);

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_CE_STATIC(&o, group_oodynamica_ce, "call1", &_0, 1);
	zephir_check_call_status();
	RETURN_CCTOR(o);

}



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
#include "kernel/fcall.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Group_Model) {

	ZEPHIR_REGISTER_CLASS(Group, Model, group, model, group_model_method_entry, ZEND_ACC_EXPLICIT_ABSTRACT_CLASS);

	return SUCCESS;

}

PHP_METHOD(Group_Model, testCalled) {

	int ZEPHIR_LAST_CALL_STATUS;
	ZEPHIR_INIT_THIS();


	ZEPHIR_MM_GROW();

	ZEPHIR_RETURN_CALL_SELF("testcalled3", NULL, 0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Group_Model, testCalled2) {

	int ZEPHIR_LAST_CALL_STATUS;
	ZEPHIR_INIT_THIS();


	ZEPHIR_MM_GROW();

	ZEPHIR_RETURN_CALL_SELF("testcalled3", NULL, 0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Group_Model, testCalled3) {

	ZEPHIR_INIT_THIS();


	zephir_get_called_class(return_value TSRMLS_CC);
	return;

}


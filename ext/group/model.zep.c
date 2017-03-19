
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

PHP_METHOD(Group_Model, fistFunc) {

	int ZEPHIR_LAST_CALL_STATUS;
	ZEPHIR_INIT_THIS();


	ZEPHIR_MM_GROW();

	ZEPHIR_RETURN_CALL_SELF("thirdfunc", NULL, 0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Group_Model, secondFun) {

	int ZEPHIR_LAST_CALL_STATUS;
	ZEPHIR_INIT_THIS();


	ZEPHIR_MM_GROW();

	ZEPHIR_RETURN_CALL_SELF("thirdfunc", NULL, 0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Group_Model, thirdFunc) {

	ZEPHIR_INIT_THIS();


	zend_class_entry *called_scope = zend_get_called_scope(EG(current_execute_data));
	if (called_scope) {
		ZVAL_STR(return_value, zend_string_dup(called_scope->name, 0));
	}

	return;

}


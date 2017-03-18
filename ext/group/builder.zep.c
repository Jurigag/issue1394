
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
#include "kernel/object.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Group_Builder) {

	ZEPHIR_REGISTER_CLASS(Group, Builder, group, builder, group_builder_method_entry, 0);

	zend_declare_property_null(group_builder_ce, SL("_models"), ZEND_ACC_PROTECTED TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Group_Builder, from) {

	zval *models, models_sub;
	ZEPHIR_INIT_THIS();

	ZVAL_UNDEF(&models_sub);

	zephir_fetch_params(0, 1, 0, &models);



	zephir_update_property_zval(this_ptr, SL("_models"), models);
	RETURN_THISW();

}


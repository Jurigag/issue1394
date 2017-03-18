
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#include "php_ext.h"
#include "group.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *group_model_ce;
zend_class_entry *group_oo_ce;
zend_class_entry *group_oodynamica_ce;

ZEND_DECLARE_MODULE_GLOBALS(group)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(group)
{
	REGISTER_INI_ENTRIES();
	ZEPHIR_INIT(Group_Model);
	ZEPHIR_INIT(Group_Oo);
	ZEPHIR_INIT(Group_OoDynamicA);
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(group)
{
	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_group_globals *group_globals TSRMLS_DC)
{
	group_globals->initialized = 0;

	/* Memory options */
	group_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	group_globals->active_symbol_table = NULL;

	/* Cache Enabled */
	group_globals->cache_enabled = 1;

	/* Recursive Lock */
	group_globals->recursive_lock = 0;

	/* Static cache */
	memset(group_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);


}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_group_globals *group_globals TSRMLS_DC)
{

}

static PHP_RINIT_FUNCTION(group)
{

	zend_group_globals *group_globals_ptr;
#ifdef ZTS
	tsrm_ls = ts_resource(0);
#endif
	group_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(group_globals_ptr TSRMLS_CC);
	zephir_initialize_memory(group_globals_ptr TSRMLS_CC);


	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(group)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}

static PHP_MINFO_FUNCTION(group)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_GROUP_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_GROUP_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_GROUP_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_GROUP_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_GROUP_ZEPVERSION);
	php_info_print_table_end();

	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(group)
{
	php_zephir_init_globals(group_globals TSRMLS_CC);
	php_zephir_init_module_globals(group_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(group)
{

}


zend_function_entry php_group_functions[] = {
ZEND_FE_END

};

zend_module_entry group_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_GROUP_EXTNAME,
	php_group_functions,
	PHP_MINIT(group),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(group),
#else
	NULL,
#endif
	PHP_RINIT(group),
	PHP_RSHUTDOWN(group),
	PHP_MINFO(group),
	PHP_GROUP_VERSION,
	ZEND_MODULE_GLOBALS(group),
	PHP_GINIT(group),
	PHP_GSHUTDOWN(group),
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_GROUP
ZEND_GET_MODULE(group)
#endif


extern zend_class_entry *group_oodynamica_ce;

ZEPHIR_INIT_CLASS(Group_OoDynamicA);

PHP_METHOD(Group_OoDynamicA, getNew);
PHP_METHOD(Group_OoDynamicA, call2);
PHP_METHOD(Group_OoDynamicA, call1);

ZEPHIR_INIT_FUNCS(group_oodynamica_method_entry) {
	PHP_ME(Group_OoDynamicA, getNew, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Group_OoDynamicA, call2, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Group_OoDynamicA, call1, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

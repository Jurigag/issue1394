
extern zend_class_entry *group_oo_ce;

ZEPHIR_INIT_CLASS(Group_Oo);

PHP_METHOD(Group_Oo, testInstance1);
PHP_METHOD(Group_Oo, testInstance12);

ZEPHIR_INIT_FUNCS(group_oo_method_entry) {
	PHP_ME(Group_Oo, testInstance1, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Group_Oo, testInstance12, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

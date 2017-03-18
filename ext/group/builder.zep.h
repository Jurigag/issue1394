
extern zend_class_entry *group_builder_ce;

ZEPHIR_INIT_CLASS(Group_Builder);

PHP_METHOD(Group_Builder, from);

ZEND_BEGIN_ARG_INFO_EX(arginfo_group_builder_from, 0, 0, 1)
	ZEND_ARG_INFO(0, models)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(group_builder_method_entry) {
	PHP_ME(Group_Builder, from, arginfo_group_builder_from, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

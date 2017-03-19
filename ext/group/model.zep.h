
extern zend_class_entry *group_model_ce;

ZEPHIR_INIT_CLASS(Group_Model);

PHP_METHOD(Group_Model, fistFunc);
PHP_METHOD(Group_Model, secondFun);
PHP_METHOD(Group_Model, thirdFunc);

ZEPHIR_INIT_FUNCS(group_model_method_entry) {
	PHP_ME(Group_Model, fistFunc, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Group_Model, secondFun, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Group_Model, thirdFunc, NULL, ZEND_ACC_PROTECTED|ZEND_ACC_STATIC)
	PHP_FE_END
};

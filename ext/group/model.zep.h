
extern zend_class_entry *group_model_ce;

ZEPHIR_INIT_CLASS(Group_Model);

PHP_METHOD(Group_Model, testCalled);
PHP_METHOD(Group_Model, testCalled2);
PHP_METHOD(Group_Model, testCalled3);

ZEPHIR_INIT_FUNCS(group_model_method_entry) {
	PHP_ME(Group_Model, testCalled, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Group_Model, testCalled2, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Group_Model, testCalled3, NULL, ZEND_ACC_PROTECTED|ZEND_ACC_STATIC)
	PHP_FE_END
};

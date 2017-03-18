namespace Group;

abstract class Model
{
	public function testCalled()
	{
		return self::testCalled3();
	}

	public static function testCalled2()
	{
		return self::testCalled3();
	}

	protected static function testCalled3()
	{
		return get_called_class();
	}
}

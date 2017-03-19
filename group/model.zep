namespace Group;

abstract class Model
{
	public function fistFunc()
	{
		return self::thirdFunc();
	}

	public static function secondFun()
	{
		return self::thirdFunc();
	}

	protected static function thirdFunc()
	{
		return get_called_class();
	}
}

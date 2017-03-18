namespace Group;

class OoDynamicA
{
	public static function getNew()
	{
		var className, fullClassName;

		let className = get_called_class();
		let fullClassName = "\\" . className;

		return new {fullClassName}();
	}

	public static function call2()
	{
		return \Group\OoDynamicA::getNew();
	}

	public static function call1()
	{
		return \Group\OoDynamicA::call2();
	}
}

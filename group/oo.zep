namespace Group;

class Oo
{
	public function testInstance1()
	{
		var o;
		let o = new \stdClass();
		return o;
	}

    public function testInstance12()
    {
        var o;
        let o = OoDynamicA::call1();

        return o;
    }
}

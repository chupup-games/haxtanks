package ;

class Tank {

	public var id:Int;
	public var x:Float;
	public var y:Float;
	public var rotation:Float; // rotation is in radians

	public var speed:Int;

	public function new(x:Float, y:Float) {

		this.x = x;
		this.y = y;

		rotation = 0;

		speed = 25;

	}
}
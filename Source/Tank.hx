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

	public function collideWorld(world:openfl.display.Sprite) {

		if(x < 0) x = world.stage.stageWidth;
		else if(x > world.stage.stageWidth) x = 0;

		if(y < 0) y = world.stage.stageHeight;
		else if(y > world.stage.stageHeight) y = 0;

	}
}
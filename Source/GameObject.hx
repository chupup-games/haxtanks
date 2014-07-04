package ;

// parent class for all objects in the game
class GameObject {

	public var id:Int;
	public var x:Float;
	public var y:Float;
	public var rotation:Float; // rotation is in radians

	public var speed:Int;

	private var radius:Float; // needed for circle collision detection

	public function new(x:Float, y:Float, rotation:Float, radius:Float) {

		this.x = x;
		this.y = y;

		this.rotation = rotation;
		this.radius = radius;

	}

	public function getRadius():Float {

		return radius;

	}

	public function collideWorld(world:openfl.display.Sprite) {

		if(x < 0) x = world.stage.stageWidth;
		else if(x > world.stage.stageWidth) x = 0;

		if(y < 0) y = world.stage.stageHeight;
		else if(y > world.stage.stageHeight) y = 0;

	}
}
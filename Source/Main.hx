package ;

import openfl.display.Sprite;
import openfl.display.Tilesheet;
import openfl.events.KeyboardEvent;
import openfl.ui.Keyboard;


class Main extends Sprite {

	var tilesheet:Tilesheet;
	var tankList:Array<Float>;
	var t1:Tank;
	var t2:Tank;

	// reset player position and rotation
	var resetT1X:Int;
	var resetT1Y:Int; 
	var resetT1R:Float;
	var resetT2X:Int; 
	var resetT2Y:Int; 
	var resetT2R:Float;

	// set the player keys
	private var upKey:Bool;
	private var downKey:Bool;
	private var leftKey:Bool;
	private var rightKey:Bool;
	private var controlKey:Bool;

	private var w_Key:Bool;
	private var s_Key:Bool;
	private var a_Key:Bool;
	private var d_Key:Bool;
	private var spaceKey:Bool;

	private var reset_Key:Bool;

	private var previousTime:Int;
		
	
	public function new () {
		
		super ();

		create();
				
	}

	function create() {

		var stageCenterX = Std.int(this.stage.stageWidth / 2);
		var stageCenterY = Std.int(this.stage.stageHeight / 2);

		resetT1X = stageCenterX - 250;
		resetT1Y = stageCenterY;
		resetT1R = 0;

		resetT2X = stageCenterX + 250;
		resetT2Y = stageCenterY;
		resetT2R = 0;

		// load tilesheet
		var bitmapData = openfl.Assets.getBitmapData("assets/tanks.png");
		tilesheet = new Tilesheet(bitmapData);

		// create the tank objects
		t1 = new Tank(resetT1X, resetT1Y, resetT1R, 16);
		t1.id = tilesheet.addTileRect(new openfl.geom.Rectangle(0, 16, 32, 32), new openfl.geom.Point(16, 16));
		t1.speed = 25;
		t2 = new Tank(resetT2X, resetT2Y, resetT2R, 16);
		t2.id = tilesheet.addTileRect(new openfl.geom.Rectangle(32, 16, 32, 32), new openfl.geom.Point(16, 16));	
		t2.speed = 25;

		stage.addEventListener(KeyboardEvent.KEY_DOWN, keyDownHandler);
		stage.addEventListener(KeyboardEvent.KEY_UP, keyUpHandler);

		previousTime = openfl.Lib.getTimer ();
		stage.addEventListener(openfl.events.Event.ENTER_FRAME, update);

	}

	function update(event:openfl.events.Event) {

		moveTank();
		render();

	}

	private function keyDownHandler(event:KeyboardEvent) {

		switch (event.keyCode) {

			case Keyboard.UP: upKey = true;
			case Keyboard.DOWN: downKey = true;
			case Keyboard.LEFT: leftKey = true;
			case Keyboard.RIGHT: rightKey = true;
			case Keyboard.CONTROL: controlKey = true;

			case Keyboard.W: w_Key = true;
			case Keyboard.S: s_Key = true;
			case Keyboard.A: a_Key = true;
			case Keyboard.D: d_Key = true;
			case Keyboard.SPACE: spaceKey = true;

			case Keyboard.BACKSPACE: reset_Key = true;

		}

	}

	private function keyUpHandler(event:KeyboardEvent) {

		switch (event.keyCode) {

			case Keyboard.UP: upKey = false;
			case Keyboard.DOWN: downKey = false;
			case Keyboard.LEFT: leftKey = false;
			case Keyboard.RIGHT: rightKey = false;
			case Keyboard.CONTROL: controlKey = false;

			case Keyboard.W: w_Key = false;
			case Keyboard.S: s_Key = false;
			case Keyboard.A: a_Key = false;
			case Keyboard.D: d_Key = false;
			case Keyboard.SPACE: spaceKey = false;
			
		}

	}

	function moveTank() {

		var currentTime = openfl.Lib.getTimer();
        var deltaTime = currentTime - previousTime;
        var delta = (deltaTime / 1000);
        previousTime = currentTime;

		if(reset_Key) resetTank();

		if(upKey) {
			t1.y -= t1.speed * delta;
			t1.rotation = 0;
		}
		else if(downKey) {
			t1.y += t1.speed * delta;
			t1.rotation = 3.14;
		}
		else if(leftKey) {
			t1.x -= t1.speed * delta;
			t1.rotation = 4.71;
		}
		else if(rightKey) {
			t1.x += t1.speed * delta;
			t1.rotation = 1.57;
		}

		if(w_Key) {
			t2.y -= t2.speed * delta;
			t2.rotation = 0;
		}
		else if(s_Key) {
			t2.y += t2.speed * delta;
			t2.rotation = 3.14;
		}
		else if(a_Key) {
			t2.x -= t2.speed * delta;
			t2.rotation = 4.71;
		}
		else if(d_Key) {
			t2.x += t2.speed * delta;
			t2.rotation = 1.57;
		}

		if(controlKey)
			t1.shoot();
		if(spaceKey)
			t2.shoot();	

		t1.collideWorld(this);
		t2.collideWorld(this);

		if(Mechanics.collide(t1, t2))
			reset_Key = true;

	}

	function resetTank() {

		reset_Key = false;

		t1.x = resetT1X;
		t1.y = resetT1Y;
		t1.rotation = resetT1R;

		t2.x = resetT2X;
		t2.y = resetT2Y;
		t2.rotation = resetT2R;

	}

	function render() {
		
		this.graphics.clear();

		tankList = [t1.x, t1.y, t1.id, t1.rotation, 
					t2.x, t2.y, t2.id, t2.rotation];

		tilesheet.drawTiles(this.graphics, tankList, false, Tilesheet.TILE_ROTATION);

	}

}
package ;

import openfl.display.Sprite;
import openfl.display.Tilesheet;
import openfl.events.KeyboardEvent;
import openfl.ui.Keyboard;


class Main extends Sprite {

	// some constants for directions etc
	var DIR_UP:Float = 0;
	var DIR_RIGHT:Float = 1.57;
	var DIR_DOWN:Float = 3.14;
	var DIR_LEFT:Float = 4.71;

	var tilesheet:Tilesheet;
	var tankList:Array<Float>;
	var t1:Tank;
	var t2:Tank;

	var t1Fired:Bool = false;
	var t2Fired:Bool = false;

	// tilesheet id for bullets
	var bulletGreen:Int;
	var bulletRed:Int;
	// saving all bullets in an array
	var bullets:Array<Array<Float>>;
	var bulletList:Array<Float>;

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

		// load tilesheet
		var bitmapData = openfl.Assets.getBitmapData("assets/tanks.png");
		tilesheet = new Tilesheet(bitmapData);

		// create the tank objects
		t1 = new Tank(stageCenterX - 250, stageCenterY, 0, 16);
		t1.id = tilesheet.addTileRect(new openfl.geom.Rectangle(0, 16, 32, 32), new openfl.geom.Point(16, 16));
		t1.speed = 25;
		t2 = new Tank(stageCenterX + 250, stageCenterY, 0, 16);
		t2.id = tilesheet.addTileRect(new openfl.geom.Rectangle(32, 16, 32, 32), new openfl.geom.Point(16, 16));	
		t2.speed = 25;

		// create bullet tilesheets
		bulletGreen = tilesheet.addTileRect(new openfl.geom.Rectangle(32, 0, 2, 2));
		bulletRed = tilesheet.addTileRect(new openfl.geom.Rectangle(34, 0, 2, 2));

		bullets = new Array();
		bulletList = new Array();

		stage.addEventListener(KeyboardEvent.KEY_DOWN, keyDownHandler);
		stage.addEventListener(KeyboardEvent.KEY_UP, keyUpHandler);

		previousTime = openfl.Lib.getTimer ();
		stage.addEventListener(openfl.events.Event.ENTER_FRAME, update);

	}

	function update(event:openfl.events.Event) {

		moveTank();
		shooting();
		render();

	}

	function render() {
		// clear the screen
		this.graphics.clear();

		// draw all current bullets
		for(b in bullets) {
			tilesheet.drawTiles(this.graphics, b);
		}

		tankList = [t1.x, t1.y, t1.id, t1.rotation, 
					t2.x, t2.y, t2.id, t2.rotation];

		// draw the 2 tanks
		tilesheet.drawTiles(this.graphics, tankList, false, Tilesheet.TILE_ROTATION);

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
									t1Fired = false;

			case Keyboard.W: w_Key = false;
			case Keyboard.S: s_Key = false;
			case Keyboard.A: a_Key = false;
			case Keyboard.D: d_Key = false;
			case Keyboard.SPACE: spaceKey = false;
									t2Fired = false;
		}

	}

	function resetTank() {

		reset_Key = false;

		t1.reset();
		t2.reset();

	}

	function moveTank() {

		var currentTime = openfl.Lib.getTimer();
        var deltaTime = currentTime - previousTime;
        var delta = (deltaTime / 1000);
        previousTime = currentTime;

		if(reset_Key) resetTank();

		if(upKey) {
			t1.y -= t1.speed * delta;
			t1.rotation = DIR_UP;
		}
		else if(downKey) {
			t1.y += t1.speed * delta;
			t1.rotation = DIR_DOWN;
		}
		else if(leftKey) {
			t1.x -= t1.speed * delta;
			t1.rotation = DIR_LEFT;
		}
		else if(rightKey) {
			t1.x += t1.speed * delta;
			t1.rotation = DIR_RIGHT;
		}

		if(w_Key) {
			t2.y -= t2.speed * delta;
			t2.rotation = DIR_UP;
		}
		else if(s_Key) {
			t2.y += t2.speed * delta;
			t2.rotation = DIR_DOWN;
		}
		else if(a_Key) {
			t2.x -= t2.speed * delta;
			t2.rotation = DIR_LEFT;
		}
		else if(d_Key) {
			t2.x += t2.speed * delta;
			t2.rotation = DIR_RIGHT;
		}	

		t1.collideWorld(this);
		t2.collideWorld(this);

		if(Mechanics.collide(t1, t2))
			reset_Key = true;

	}

	function shooting() {

		if(controlKey) {
			if(!t1Fired)  {
				t1Fired = true;
				createBullet(t1.id);
			}
		}
		if(spaceKey) {
			if(!t2Fired) {
				t2Fired = true;
				createBullet(t2.id);
			}
		}

		// move all current bullets
		// b[3] is the facing direction of the tank
		for(b in bullets) {
			if(b[3] == DIR_UP) {
				b[1] -= 1;
			}
			else if(b[3] == DIR_DOWN) {
				b[1] += 1;
			}
			else if(b[3] == DIR_LEFT) {
				b[0] -= 1;
			}
			else if(b[3] == DIR_RIGHT) {
				b[0] += 1;
			}
		}

	}

	function createBullet(tankID:Int) {

		switch (tankID) {
			case 0:
				var fBullet = new Bullet(t1.x, t1.y, 0, 0);
				bulletList = [fBullet.x, fBullet.y, bulletGreen, t1.rotation];
				bullets.push(bulletList);
			case 1:
				var fBullet = new Bullet(t2.x, t2.y, 0, 0);
				bulletList = [fBullet.x, fBullet.y, bulletRed, t2.rotation];
				bullets.push(bulletList);
		}		

	}

}
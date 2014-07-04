package ;

// static functions for general game mechanics
class Mechanics {

	static public function collide(c1:GameObject, c2:GameObject):Bool {

		var distX = c1.x - c2.x;
		var distY = c1.y - c2.y;

		var dist = Math.sqrt((distX * distX) + (distY * distY));
		return dist <= (c1.getRadius() + c2.getRadius());
	}

}
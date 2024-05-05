#pragma once

namespace Bullet
{
	class BulletController;

	class BulletService
	{
	private:
		BulletController* bullet_controller;

	public:
		BulletService();
		virtual ~BulletService();

		void initialize();
		void update();
		void render();

		/*void increaseScore(int val);
		void decreaseScore(int val);
		void increaseEnemiesKilled(int val);

		void enableShield();
		void enableRapidFire();
		void enableTrippleLaser();*/

		void reset();
	};
}
#include "object_world.h"
<<<<<<< HEAD
#include"scene.h"
=======
>>>>>>> 46efcd656628afda1e6e1411bec28c3389950aa1

void ObjectWorld::update(float dt)
{
	ObjectScreen::update(dt);
	render_position_ = game_.getCurrentScene()->worldToScreen(position_);
}

void ObjectWorld::setPosition(const glm::vec2& position)
{
	position_ = position;
	render_position_=game_.getCurrentScene()->worldToScreen(position_);
}

void ObjectWorld::setRenderPosition(const glm::vec2& render_position)
{
	render_position_ = render_position;
	position_= game_.getCurrentScene()->worldToScreen(render_position_);
}

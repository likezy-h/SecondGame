#pragma once
#include"object.h"

class ObjectScreen : public Object {
protected:
<<<<<<< HEAD
    glm::vec2 render_position_ = glm::vec2(0, 0);// 渲染(屏幕)位置
	virtual void init() override { type_ = ObjectType::OBJECT_SCREEN; }

=======
	glm::vec2 render_position_ = glm::vec2(0, 0);// 渲染(屏幕)位置
>>>>>>> 46efcd656628afda1e6e1411bec28c3389950aa1
public:
	//getters anf stters
	glm::vec2 getRenderPosition() const { return render_position_; }
	virtual void setRenderPosition(const glm::vec2& render_position) { render_position_ = render_position; }
};
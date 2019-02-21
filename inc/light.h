#ifndef LIGHT_H
#define LIGHT_H

#include <linmath.h>
#include <gl3w.h>
#include <shader.h>
#include <sprite.h>
#include <postprocessing.h>

typedef struct light {
	vec2 position;
	vec2 normal;
	vec2 size;
	vec3 color;
} light_t;

light_t light_create(vec2 position, vec2 size, vec3 color);
void light_init(int w, int h);
void light_bind(void);
void light_draw(light_t light);
void light_draw_centered(light_t light);
void light_scene_draw_offset(light_t light, vec2 offset);
void light_unbind(void);

#endif

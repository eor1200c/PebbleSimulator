//
//  pbl_main.c
//  helloworld
//
//  Created by Steven van Rossum on 15-04-13.
//  Copyright (c) 2013 Steven van Rossum. All rights reserved.
//

#include "pebble_os.h"

void handle_render(AppContextRef app_ctx, PebbleRenderEvent *event)
{
    graphics_context_set_fill_color(event->ctx, GColorWhite);
    graphics_context_set_stroke_color(event->ctx, GColorWhite);
    graphics_draw_round_rect(event->ctx, GRect(10, 10, 50, 50), 5);
    graphics_draw_circle(event->ctx, GPoint(0, 0), 15);
    graphics_fill_rect(event->ctx, GRect(40, 40, 64, 88), 0, 0);
}

void handle_tick(AppContextRef app_ctx, PebbleTickEvent * event)
{
    printf("Hello World!\n");
}

void pbl_main(void * params)
{
    PebbleAppHandlers handlers = (PebbleAppHandlers)
    {
        .render_handler = &handle_render,
        .tick_info = (PebbleAppTickInfo)
        {
            .tick_handler = &handle_tick,
            .tick_units = MINUTE_UNIT
        }
    };
    app_event_loop(params, &handlers);
}
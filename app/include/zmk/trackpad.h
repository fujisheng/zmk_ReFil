/*
 * Copyright (c) 2023 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <zephyr.h>

typedef uint8_t zmk_trackpad_finger_contacts_t;

struct zmk_trackpad_finger_data_t {
    bool present;
    bool palm;
    uint16_t x, y;
};

struct k_work_q *zmk_trackpad_work_q();

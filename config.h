/* Copyright 2022 splitkb.com <support@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Mouse */
// The default is 100
#define MOUSEKEY_WHEEL_INTERVAL 50
// The default is 40
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100

/* Tap dance */
#define TAPPING_TERM 200
// #define TAPPING_TERM_PER_KEY

/* added to try resolve wake up issue: */
#define SPLIT_USB_DETECT
#define USB_SUSPEND_WAKEUP_DELAY 800

/* Fix the tap mod issue that acts like PERMISSIVE_HOLD is always ON: */
// #define IGNORE_MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD

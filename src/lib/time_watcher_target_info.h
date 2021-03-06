/*
 * Flare
 * --------------
 * Copyright (C) 2008-2014 GREE, Inc.
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */
#ifndef	TIME_WATHCER_TARGET_INFO_H
#define	TIME_WATHCER_TARGET_INFO_H

#include <time.h>
#include <boost/function.hpp>

namespace gree {
namespace flare {

class time_watcher_target_info {
public:
	timespec timestamp;
	timespec threshold;

	// This function will be called on the time_watcher thread.
	// Be careful to avoid block the thread.
	boost::function<void(timespec)> callback;
};

}	// namespace flare
}	// namespace gree

#endif

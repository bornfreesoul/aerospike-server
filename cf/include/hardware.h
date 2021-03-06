/*
 * hardware.h
 *
 * Copyright (C) 2016-2017 Aerospike, Inc.
 *
 * Portions may be licensed to Aerospike, Inc. under one or more contributor
 * license agreements.
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU Affero General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option) any
 * later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/
 */

#pragma once

#include <stdbool.h>
#include <stdint.h>

typedef uint16_t cf_topo_os_cpu_index;

typedef uint16_t cf_topo_numa_node_index;
typedef uint16_t cf_topo_core_index;
typedef uint16_t cf_topo_cpu_index;

bool cf_topo_init(cf_topo_numa_node_index i_numa_node, bool pin);

uint16_t cf_topo_count_cores(void);
uint16_t cf_topo_count_cpus(void);

cf_topo_cpu_index cf_topo_current_cpu(void);

void cf_topo_pin_to_core(cf_topo_core_index i_core);
void cf_topo_pin_to_cpu(cf_topo_cpu_index i_cpu);

cf_topo_cpu_index cf_topo_os_cpu_index_to_cpu_index(cf_topo_os_cpu_index i_os_cpu);

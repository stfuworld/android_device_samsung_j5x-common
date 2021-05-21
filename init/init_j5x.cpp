/*
 * Copyright (C) 2017-2021, The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <init_msm8916_base.h>
  

void vendor_load_properties()
{
	char *device = NULL;
	char *model = NULL;

	/* get the bootloader string */
	std::string bootloader = android::base::GetProperty("ro.bootloader", "");

	if (bootloader.find("J510FN") == 0) {
                device = (char *)"j5xnlte";
                model = (char *)"SM-J510FN";
                set_lte_properties();
	}
	else if (bootloader.find("J510F") == 0) {
		device = (char *)"j5xlte";
		model = (char *)"SM-J510F";
		set_lte_properties();
	}
	else if (bootloader.find("J510MN") == 0) {
		device = (char *)"j5xnlte";
		model = (char *)"SM-J510F";
		set_lte_properties();
	}
	else if (bootloader.find("J510GN") == 0) {
		device = (char *)"j5xnlte";
		model = (char *)"SM-J510F";
		set_lte_properties();
	}
	else if (bootloader.find("J5108") == 0) {
		device = (char *)"j5xltecmcc";
		model = (char *)"SM-J5108";
		set_lte_properties();
	}
	else {
		return;
	}

	/* set the properties */
	set_target_properties(device, model);
}

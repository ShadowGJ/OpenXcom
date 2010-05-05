/*
 * Copyright 2010 Daniel Albano
 *
 * This file is part of OpenXcom.
 *
 * OpenXcom is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenXcom is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenXcom.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef OPENXCOM__LANGSTRING_H
#define OPENXCOM__LANGSTRING_H

// When there's two equal strings, _UC denotes the Upper-Case one

enum LangString
{
	STR_YES = 279,
	STR_NO = 280,
	STR_ABANDON_GAME = 800,
	STR_OK = 76,
	STR_TRANSFERS = 140,
	STR_STORES_UC = 934,
	STR_MONTHLY_COSTS = 954,
	STR_PERSONNEL_AVAILABLE = 128,
	STR_SOLDIERS = 129,
	STR_ENGINEERS = 130,
	STR_SCIENTISTS = 131,
	STR_SPACE_USED = 132,
	STR_LIVING_QUARTERS = 133,
	STR_STORES = 134,
	STR_LABORATORIES = 135,
	STR_WORK_SHOPS = 136,
	STR_HANGARS = 137,
	STR_DEFENCE_STRENGTH = 139,
	STR_SHORT_RANGE_DETECTION = 138,
	STR_LONG_RANGE_DETECTION = 933,
	STR_FUNDS_ = 56,
	STR_BUILD_NEW_BASE = 57,
	STR_BASE_INFORMATION = 58,
	STR_SOLDIERS_UC = 820,
	STR_EQUIP_CRAFT = 59,
	STR_BUILD_FACILITIES = 60,
	STR_RESEARCH = 61,
	STR_MANUFACTURE = 62,
	STR_TRANSFER = 63,
	STR_PURCHASE_RECRUIT = 64,
	STR_SELL_SACK_UC = 65,
	STR_GEOSCAPE = 66,
	STR_INTERCEPTION_CRAFT = 318,
	STR_BASE_ = 319,
	STR_NAME = 320,
	STR_WEAPON_SYSTEMS = 642,
	STR_CREW = 643,
	STR_HWPS = 644,
	STR_INTERNATIONAL_RELATIONS = 638,
	STR_COUNTRY = 639,
	STR_FUNDING = 640,
	STR_CHANGE = 641,
	STR_CANCEL = 71,
	STR_LAUNCH_INTERCEPTION = 264,
	STR_CRAFT = 265,
	STR_STATUS = 266,
	STR_BASE = 267,
	STR_WEAPONS_CREW_HWPS = 799,
	STR_UFO_ENEMY_UNKNOWN = 779,
	STR_NEW_GAME = 780,
	STR_LOAD_SAVED_GAME = 781,
	STR_QUIT = 801,
	STR_SELECT_DIFFICULTY_LEVEL = 782,
	STR_BEGINNER = 783,
	STR_EXPERIENCED = 784,
	STR_VETERAN = 785,
	STR_GENIUS = 786,
	STR_SUPERHUMAN = 787,
	STR_GAME_OPTIONS = 315,
	STR_LOAD_GAME = 316,
	STR_SAVE_GAME = 317,
	STR_PURCHASE_HIRE_PERSONNEL = 123,
	STR_COST_OF_PURCHASES = 125,
	STR_ITEM = 97,
	STR_COST_PER_UNIT_UC = 126,
	STR_QUANTITY = 127,
	STR_CURRENT_RESEARCH = 78,
	STR_SCIENTISTS_AVAILABLE = 79,
	STR_SCIENTISTS_ALLOCATED = 80,
	STR_LABORATORY_SPACE_AVAILABLE = 81,
	STR_RESEARCH_PROJECT = 82,
	STR_SCIENTISTS_ALLOCATED_UC = 83,
	STR_PROGRESS = 84,
	STR_NEW_PROJECT = 85,
	STR_SELL_ITEMS_SACK_PERSONNEL = 230,
	STR_VALUE_OF_SALES = 231,
	STR_FUNDS = 232,
	STR_SELL_SACK = 233,
	STR_VALUE = 234,
	STR_SOLDIER_LIST = 803,
	STR_RANK = 336,
	STR_CURRENT_PRODUCTION = 92,
	STR_ENGINEERS_AVAILABLE = 93,
	STR_ENGINEERS_ALLOCATED_UC = 94,
	STR_WORKSHOP_SPACE_AVAILABLE = 95,
	STR_CURRENT_FUNDS = 96,
	STR_ENGINEERS_ALLOCATED = 98,
	STR_UNITS_PRODUCED = 99,
	STR_TOTAL_TO_PRODUCE = 100,
	STR_COST_PER_UNIT = 101,
	STR_DAYS_HOURS_LEFT = 102,
	STR_NEW_PRODUCTION = 103,
	STR_ST = 170,
	STR_ND = 171,
	STR_RD = 172,
	STR_TH = 173,
	STR_SUNDAY = 185,
	STR_MONDAY = 186,
	STR_TUESDAY = 187,
	STR_WEDNESDAY = 188,
	STR_THURSDAY = 189,
	STR_FRIDAY = 190,
	STR_SATURDAY = 191,
	STR_JAN = 626,
	STR_FEB = 627,
	STR_MAR = 628,
	STR_APR = 629,
	STR_MAY = 630,
	STR_JUN = 631,
	STR_JUL = 632,
	STR_AUG = 633,
	STR_SEP = 634,
	STR_OCT = 635,
	STR_NOV = 636,
	STR_DEC = 637,
	STR_USA = 601,
	STR_RUSSIA = 602,
	STR_UK = 603,
	STR_FRANCE = 604,
	STR_GERMANY = 605,
	STR_ITALY = 606,
	STR_SPAIN = 607,
	STR_CHINA = 608,
	STR_JAPAN = 609,
	STR_INDIA = 610,
	STR_BRAZIL = 611,
	STR_AUSTRALIA = 612,
	STR_NIGERIA = 613,
	STR_SOUTH_AFRICA = 614,
	STR_EGYPT = 615,
	STR_CANADA = 616,
	STR_TOTAL = 160,
	STR_XCOM_PROJECT_MONTHLY_REPORT = 704,
	STR_MONTH = 705,
	STR_MONTHLY_RATING = 718,
	STR_FUNDING_CHANGE = 719,
	STR_TERRIBLE = 698,
	STR_POOR = 699,
	STR_GOOD = 701,
	STR_EXCELLENT = 702,
	STR_COUNCIL_SATISFIED = 706,
	STR_COUNCIL_VERY_PLEASED = 707,
	STR_COUNCIL_DISSATISFIED = 708,
	STR_COUNCIL_TERMINATED = 709,
	STR_COUNCIL_FINANCIAL = 720,
	STR_COUNTRY_HAPPY = 710,
	STR_COUNTRIES_HAPPY = 711,
	STR_COUNTRY_UNHAPPY = 713,
	STR_COUNTRIES_UNHAPPY = 714,
	STR_AND = 712,
	STR_COUNTRY_PACT = 716,
	STR_COUNTRIES_PACT = 717
};

#endif
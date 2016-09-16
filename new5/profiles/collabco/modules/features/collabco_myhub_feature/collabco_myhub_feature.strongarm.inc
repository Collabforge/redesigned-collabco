<?php
/**
 * @file
 * collabco_myhub_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function collabco_myhub_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'myhub_timestamp';
  $strongarm->value = array(
    1 => 1471325195,
    13 => 1468566441,
    2 => 1470098763,
    7 => 1468559954,
    5 => 1469000381,
    16 => 1470120698,
    17 => 1467675588,
    19 => 1467254566,
    18 => 1470697128,
    20 => 1467867666,
    21 => 1469080887,
    23 => 1469486442,
    24 => 1469525231,
    26 => 1467335831,
    27 => 1467611309,
    28 => 1467339411,
    29 => 1467348540,
    30 => 1467356477,
    31 => 1470026265,
    32 => 1469066722,
    33 => 1467602030,
    34 => 1467930706,
    35 => 1469074372,
    36 => 1467679227,
    22 => 1467695996,
    37 => 1467759406,
    11 => 1469504327,
    38 => 1469410865,
    40 => 1468389725,
    9 => 1468572240,
    53 => 1468796024,
    55 => 1471233489,
    78 => 1468799271,
    66 => 1470262332,
    86 => 1470027383,
    87 => 1468800371,
    89 => 1468800462,
    82 => 1468801195,
    93 => 1468800764,
    98 => 1468801120,
    56 => 1468801098,
    92 => 1468801116,
    84 => 1469080658,
    106 => 1468801687,
    81 => 1468881729,
    105 => 1468801681,
    107 => 1468801799,
    102 => 1468801814,
    109 => 1468802127,
    108 => 1468802224,
    112 => 1468802427,
    117 => 1468809191,
    110 => 1468804470,
    118 => 1468804947,
    122 => 1468805428,
    120 => 1468978283,
    124 => 1468806916,
    128 => 1468809928,
    127 => 1468810560,
    126 => 1468810511,
    90 => 1470114807,
    96 => 1470887324,
    130 => 1468813376,
    131 => 1468813510,
    132 => 1468813656,
    113 => 1468899543,
    136 => 1469081233,
    139 => 1468817126,
    138 => 1469080697,
    140 => 1468818054,
    116 => 1468821523,
    149 => 1470206998,
    150 => 1468977048,
    153 => 1469051471,
    154 => 1468880718,
    156 => 1468881995,
    76 => 1468882644,
    157 => 1468883974,
    158 => 1469502631,
    151 => 1470984049,
    148 => 1468887665,
    160 => 1469151656,
    71 => 1468901402,
    164 => 1468905998,
    169 => 1468970298,
    94 => 1468978458,
    177 => 1468979675,
    178 => 1468980385,
    179 => 1469424778,
    101 => 1469056099,
    182 => 1468995303,
    181 => 1468998946,
    187 => 1469072390,
    114 => 1469079586,
    115 => 1469683740,
    193 => 1469080816,
    184 => 1469081400,
    200 => 1469081034,
    195 => 1469081164,
    202 => 1469081191,
    190 => 1469081431,
    209 => 1469081912,
    208 => 1469081888,
    210 => 1469082502,
    213 => 1469082584,
    215 => 1469083040,
    214 => 1469083718,
    216 => 1469084131,
    217 => 1469084776,
    223 => 1469086935,
    73 => 1469143267,
    69 => 1469750454,
    230 => 1469157296,
    231 => 1469157862,
    221 => 1469158995,
    235 => 1469168601,
    237 => 1469404631,
    75 => 1469408683,
    240 => 1469420431,
    67 => 1469420893,
    241 => 1469431684,
    121 => 1470008937,
    74 => 1469683652,
    170 => 1469576022,
    244 => 1469579491,
    247 => 1469675456,
    249 => 1469686974,
    251 => 1469746783,
    252 => 1469751371,
    253 => 1469943735,
    254 => 1470115696,
    256 => 1470193121,
    260 => 1470195814,
    269 => 1470639528,
    271 => 1470874748,
  );
  $export['myhub_timestamp'] = $strongarm;

  return $export;
}
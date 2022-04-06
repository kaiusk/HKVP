<?php

/**
 * Lihtsaim viis, miinuseks on see, et elemendid on alati sorteeritud
 *
 * @param array $array
 * @return array|int|string $array
 */
function random_items1(array $array): array|int|string {
    return array_rand($array, min([3, count($array)]));
}

/**
 * Siin on tulemused ilusti segamini
 *
 * @param array $array
 * @return array
 */
function random_items2(array $array): array {
    $a = $array;
    shuffle($a);
    return array_slice($a, 0, min([3, count($array)]));
}

/**
 * Kasutame ühte for loopi
 *
 * @param array $array
 * @return array
 * @throws Exception
 */
function random_items3(array $array): array {
    $return = [];
    $a = $array;
    for ($i = 0; $i < min([3, count($array)]); $i++) {
        $random_index = random_int(0, count($a) - 1);
        $return[] = $a[$random_index];
        array_splice($a, $random_index, 1);
    }
    return $return;
}

/**
 * Kasutame for loopi ja while loopi
 *
 * @param array $array
 * @return array
 * @throws Exception
 */
function random_items4(array $array): array {
    $return = [];
    for ($i = 0; $i < min([3, count($array)]); $i++) {
        $random_index = random_int(0, count($array) - 1);
        while (in_array($random_index, $return)) {
            $random_index = random_int(0, count($array) - 1);
        }
        $return[] = $array[$random_index];
    }
    return $return;
}

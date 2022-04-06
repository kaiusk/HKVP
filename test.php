<?php

require 'functions.inc';

$test = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11];

print_r(random_items1($test));

print_r(random_items2($test));

try {
    print_r(random_items3($test));
} catch (Exception $e) {
}

try {
    print_r(random_items4($test));
} catch (Exception $e) {
}

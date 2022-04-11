<?php
if ('/nix/store/bq7pj5lz7rq92p3d3qyy25lpzic9phy5-php-7.4.21/lib/php' == '@'.'php_dir'.'@') {
    // This package hasn't been installed.
    // Adjust path to ensure includes find files in working directory.
    set_include_path(dirname(dirname(__FILE__))
        . PATH_SEPARATOR . dirname(__FILE__)
        . PATH_SEPARATOR . get_include_path());
}

require_once 'Structures/Graph.php';

#!/usr/local/bin/php
<?php

class Phpized extends Group\Model {

}

$test = new Phpized();
echo $test->testCalled() . PHP_EOL;

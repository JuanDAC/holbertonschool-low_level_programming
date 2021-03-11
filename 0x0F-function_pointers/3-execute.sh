#!/bin/bash

echo "./calc 1";
echo $(./calc 1);
echo "./calc 1 + 1";
echo $(./calc 1 + 1);
echo "./calc 97 + 1";
echo $(./calc 97 + 1);
echo "./calc 1024 / 10";
echo $(./calc 1024 / 10);
echo "./calc 1024 '*' 98";
echo $(./calc 1024 '*' 98);
echo "./calc 1024 '\*' 98";
echo $(./calc 1024 '\*' 98);
echo "./calc 1024 - 98";
echo $(./calc 1024 - 98);
echo "./calc 1024 '%' 98";
echo $(./calc 1024 '%' 98);
echo "./calc 1024 - 1024";
echo $(./calc 1024 - 1024);


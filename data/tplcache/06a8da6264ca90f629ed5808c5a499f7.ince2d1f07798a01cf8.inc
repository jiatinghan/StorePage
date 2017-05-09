<?php
$z[0]=Array("arcurl","",54,69);
$z[1]=Array("image","",262,276);
$z[2]=Array("shorttitle","",469,517);
$z[2][4]['function']="cn_substr(@me,40)";
$z[3]=Array("title","",623,637);
$z[4]=Array("id"," \$aid = @me; \$row = \$GLOBALS['dsql']->GetOne(\"Select body From `dede_addonarticle` where aid='\$aid' \"); @me = cn_substr(strip_tags(\"{\$row['body']}\"),960);",732,920);
$z[4][4]['runphp']="yes";

?>
<?php
$z[0]=Array("field","",66,85);
$z[0][4]['name']="title";
$z[1]=Array("global","",86,112);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",153,182);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",222,280);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",721,756);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",974,1032);
$z[5][4]['name']="typeid";
$z[5][4]['function']="GetTopTypename(@me)";
$z[6]=Array("channel","\r\n      <dl class=\"list-none navnow\">\r\n        <dt id='part2_7'><a href='[field:typeurl/]' title='[field:typename/]' ><span>[field:typename/]</span></a></dt>\r\n      </dl>\r\n      ",1153,1498);
$z[6][4]['type']="son";
$z[6][4]['currentstyle']="<dl> <dt><a href='~typelink~' class='zm'><span>~typename~</span></a></dt> </dl>";
$z[7]=Array("field","",2102,2131);
$z[7][4]['name']="position";
$z[8]=Array("list","\r\n        <li class='list top'><span>[[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]]</span><a href='[field:arcurl/]' title='[field:title/]' target='_self'>[field:title/]</a>\r\n          <p>[field:description/]...</p>\r\n        </li>\r\n        ",2267,2545);
$z[8][4]['pagesize']="8";
$z[9]=Array("pagelist","",2621,2699);
$z[9][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[9][4]['listsize']="5";
$z[10]=Array("include","",2780,2817);
$z[10][4]['filename']="footer.htm";

?>
function test( id, checkProperty, formId, nameOfCheckBox) {

var checkName = nameOfCheckBox;
var textName = checkName.replace("[account]", "[status]") ;
var destText=document.getElementsByName(textName);
for (i=0; i< destText.length; i++) {
  if ( checkProperty )  {
    destText[i].value = 'ABSENT';
    destText[i].style.color = "red";
  }
  else {
    destText[i].value = 'PRESENT';
    destText[i].style.color = "black";
   }
}

return;
}
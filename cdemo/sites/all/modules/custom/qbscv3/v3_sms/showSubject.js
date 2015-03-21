function showSubject(  checkProperty) {


var destText=document.getElementsByName("v3AdminOuter[subject]");

  if ( checkProperty )  {
   destText[0].style.display="block"
   destText[0].value = "Enter Your Email Id";
//    destText.disabled=false;
 //   destText.style.display="none"
    var idVal = destText[0].id;    
     labels = document.getelementsByTagName('label');    
     for( var i = 0; i < labels.length; i++ ) {       
     	if (labels[i].htmlFor == idVal)            
     	// return labels[i];    
     	// labels[i] = "Subject:";
     	labels[i].style.display="block"
     }         
  }
  else {
    destText[0].style.display="none"
       destText[0].value = "Enter Your Email Id";
       
       
     var idVal = destText[0].id;    
     labels = document.getelementsByTagName('label');    
     for( var i = 0; i < labels.length; i++ ) {       
     	if (labels[i].htmlFor == idVal)            
     	// return labels[i];    
     //	labels[i] = "";
     	labels[i].style.display="none"
     }        
  //  destText.disabled=true;
   }

return;
}	
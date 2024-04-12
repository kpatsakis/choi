void fun()
{
  char* entity_8;
  char entity_7[38] = "";
  entity_7 = NULL;
  memset(entity_7, 'm', 38-1);
  entity_7[38-1]='';
  entity_8 = (char*)malloc(46*sizeof(char));
  entity_8[46-1]='';
  memcpy(entity_8, entity_7, 38*sizeof(char));
}
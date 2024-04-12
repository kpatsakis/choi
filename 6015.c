void fun()
{
  char* entity_0;
  char entity_5[75] = "";
  entity_5 = NULL;
  memset(entity_5, 'w', 75-1);
  entity_5[75-1]='';
  entity_0 = (char*)malloc(46*sizeof(char));
  entity_0[46-1]='';
  memcpy(entity_0, entity_5, 75*sizeof(char));
}
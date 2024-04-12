void fun()
{
  int entity_2 = 99;
  char entity_5[95] = "";
  entity_5 = NULL;
  char* entity_3;
  char* entity_0;
  memset(entity_5, 'F', 95-1);
  entity_5[95-1]='';
  entity_0 = (char*)malloc(39*sizeof(char));
  entity_0[39-1]='';
  entity_3 = (char*)malloc(46*sizeof(char));
  entity_3[46-1]='';
  memcpy(entity_0, entity_5, 95*sizeof(char));
}
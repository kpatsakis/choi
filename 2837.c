void fun()
{
  int entity_7 = 78;
  int entity_6 = 25;
  char* entity_3;
  char* entity_2;
  char* entity_8;
  char entity_5[19] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(46*sizeof(char));
  entity_3[46-1]='';
  memset(entity_5, 'p', 19-1);
  entity_5[19-1]='';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[59-1]='';
  entity_6 = 27;
  memcpy(entity_8, entity_5, 19*sizeof(char));
}
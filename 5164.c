void fun()
{
  int entity_8 = 78;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_2;
  char entity_4[58] = "";
  entity_4 = NULL;
  memset(entity_6, 'k', entity_8-1);
  entity_6[entity_8-1]='';
  memset(entity_4, 'z', 58-1);
  entity_4[58-1]='';
  entity_2 = (char*)malloc(46*sizeof(char));
  entity_2[46-1]='';
  entity_8 = 17;
  memcpy(entity_2, entity_6, entity_8*sizeof(char));
}
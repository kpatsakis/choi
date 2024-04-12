void fun()
{
  int entity_3 = 35;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  char* entity_8;
  memset(entity_2, 'A', entity_3-1);
  entity_2[entity_3-1]='';
  entity_8 = (char*)malloc(46*sizeof(char));
  entity_8[46-1]='';
  entity_3 = 86;
  memcpy(entity_8, entity_2, entity_3*sizeof(char));
}
void fun()
{
  int entity_2 = 61;
  char entity_9 = 'L';
  char* entity_3;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(46*sizeof(char));
  entity_3[46-1]='';
  memset(entity_8, 'Q', entity_2-1);
  entity_8[entity_2-1]='';
  strcpy(entity_3, entity_8);
}
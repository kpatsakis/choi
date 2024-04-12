void fun()
{
  int entity_8 = 69;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char* entity_7;
  memset(entity_2, 'G', entity_8-1);
  entity_2[entity_8-1]='';
  entity_7 = (char*)malloc(46*sizeof(char));
  entity_7[46-1]='';
  strcpy(entity_7, entity_2);
}
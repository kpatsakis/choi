void fun()
{
  int entity_9 = 65;
  entity_9 = 65;
  char* entity_5;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  entity_5 = (char*)malloc(46*sizeof(char));
  entity_5[46-1]='';
  memset(entity_2, 'v', entity_9-1);
  entity_2[entity_9-1]='';
  strcpy(entity_5, entity_2);
}
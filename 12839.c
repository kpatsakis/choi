void fun()
{
  int entity_9 = 52;
  char* entity_0;
  char entity_2 = 'T';
  char entity_1[entity_9] = "";
  char* entity_8;
  entity_8 = (char*)malloc(46*sizeof(char));
  entity_8[0]='0';
  entity_0 = (char*)malloc(91*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'T', entity_9-1);
  entity_1[entity_9-1]='0';
  strcpy(entity_0, entity_1);
}
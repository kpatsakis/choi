void fun()
{
  int entity_1 = 37;
  char* entity_9;
  char entity_0[entity_1] = "";
  memset(entity_0, 'P', entity_1-1);
  entity_0[entity_1-1]='0';
  entity_9 = (char*)malloc(46*sizeof(char));
  entity_9[0]='0';
  entity_1 = 23;
  memcpy(entity_9, entity_0, entity_1*sizeof(char));
}
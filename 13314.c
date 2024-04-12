void fun()
{
  int entity_7 = 63;
  entity_7 = 63;
  char* entity_9;
  char entity_4[entity_7] = "";
  entity_9 = (char*)malloc(46*sizeof(char));
  entity_9[0]='0';
  memset(entity_4, 'I', entity_7-1);
  entity_4[entity_7-1]='0';
  strcpy(entity_9, entity_4);
}
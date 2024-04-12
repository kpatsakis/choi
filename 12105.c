void fun()
{
  int entity_3 = 71;
  char entity_9[entity_3] = "";
  char* entity_0;
  entity_0 = (char*)malloc(59*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'j', entity_3-1);
  entity_9[entity_3-1]='0';
  strcpy(entity_0, entity_9);
}
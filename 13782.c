void fun()
{
  int entity_4 = 41;
  entity_4 = 41;
  char entity_9[entity_4] = "";
  char* entity_8;
  entity_8 = (char*)malloc(76*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'J', entity_4-1);
  entity_9[entity_4-1]='0';
  strcpy(entity_8, entity_9);
}
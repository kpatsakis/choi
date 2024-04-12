void fun()
{
  int entity_3 = 80;
  int entity_4 = 64;
  char entity_9[entity_4] = "";
  char* entity_6;
  memset(entity_9, 'c', entity_4-1);
  entity_9[entity_4-1]='0';
  entity_6 = (char*)malloc(89*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_9);
}
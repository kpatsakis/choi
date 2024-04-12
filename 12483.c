void fun()
{
  int entity_1 = 39;
  int entity_4 = 58;
  char entity_9[entity_1] = "";
  char* entity_8;
  memset(entity_9, 'm', entity_1-1);
  entity_9[entity_1-1]='0';
  entity_8 = (char*)malloc(6*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_9);
}
void fun()
{
  int entity_8 = 38;
  int entity_9 = 22;
  int entity_5 = 75;
  int entity_2 = 40;
  entity_9 = 68;
  char entity_1[entity_9] = "";
  char* entity_6;
  memset(entity_1, 'J', entity_9-1);
  entity_1[entity_9-1]='0';
  entity_6 = (char*)malloc(7*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_1, entity_9*sizeof(char));
}
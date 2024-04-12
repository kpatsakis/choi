void fun()
{
  int entity_5 = 72;
  int entity_9 = 84;
  int entity_1 = 72;
  char* entity_7;
  char entity_8[entity_1] = "";
  entity_7 = (char*)malloc(99*sizeof(char));
  entity_7[0]='0';
  memset(entity_8, 'h', entity_1-1);
  entity_8[entity_1-1]='0';
  memcpy(entity_7, entity_8, entity_1*sizeof(char));
}
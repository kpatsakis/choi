void fun()
{
  int entity_9 = 25;
  int entity_6 = 39;
  char* entity_5;
  char entity_8[entity_9] = "";
  memset(entity_8, 'u', entity_9-1);
  entity_8[entity_9-1]='0';
  entity_5 = (char*)malloc(96*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_8, entity_9*sizeof(char));
}
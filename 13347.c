void fun()
{
  int entity_1 = 15;
  int entity_7 = 17;
  char entity_4[entity_7] = "";
  char* entity_9;
  entity_9 = (char*)malloc(57*sizeof(char));
  entity_9[0]='0';
  memset(entity_4, 'C', entity_7-1);
  entity_4[entity_7-1]='0';
  entity_7 = 80;
  memcpy(entity_9, entity_4, entity_7*sizeof(char));
}
void fun()
{
  int entity_3 = 28;
  int entity_2 = 46;
  char entity_4[81] = "";
  char* entity_6;
  char entity_9[entity_3] = "";
  entity_6 = (char*)malloc(39*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 'P', 81-1);
  entity_4[81-1]='0';
  memset(entity_9, 'k', entity_3-1);
  entity_9[entity_3-1]='0';
  entity_3 = 25;
  memcpy(entity_6, entity_9, entity_3*sizeof(char));
}
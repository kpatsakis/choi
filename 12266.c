void fun()
{
  int entity_5 = 10;
  int entity_0 = 79;
  char entity_9[81] = "";
  char entity_2[entity_0] = "";
  char* entity_6;
  char* entity_7;
  entity_7 = (char*)malloc(53*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'X', entity_0-1);
  entity_2[entity_0-1]='0';
  entity_6 = (char*)malloc(67*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'S', 81-1);
  entity_9[81-1]='0';
  memcpy(entity_6, entity_2, entity_0*sizeof(char));
}
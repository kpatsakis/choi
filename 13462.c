void fun()
{
  int entity_9 = 15;
  int entity_5 = 41;
  entity_5 = 76;
  char entity_3[entity_5] = "";
  char* entity_8;
  char entity_1[38] = "";
  entity_8 = (char*)malloc(60*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 'K', 38-1);
  entity_1[38-1]='0';
  memset(entity_3, 'Z', entity_5-1);
  entity_3[entity_5-1]='0';
  memcpy(entity_8, entity_3, entity_5*sizeof(char));
}
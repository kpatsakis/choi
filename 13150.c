void fun()
{
  int entity_4 = 96;
  int entity_1 = 60;
  char entity_6[40] = "";
  char* entity_9;
  char entity_8[entity_4] = "";
  memset(entity_6, 'D', 40-1);
  entity_6[40-1]='0';
  entity_9 = (char*)malloc(87*sizeof(char));
  entity_9[0]='0';
  memset(entity_8, 'Z', entity_4-1);
  entity_8[entity_4-1]='0';
  entity_4 = 62;
  memcpy(entity_9, entity_8, entity_4*sizeof(char));
}
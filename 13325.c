void fun()
{
  int entity_1 = 29;
  int entity_8 = 62;
  char entity_5[entity_8] = "";
  char* entity_3;
  char entity_6[55] = "";
  memset(entity_6, 'v', 55-1);
  entity_6[55-1]='0';
  memset(entity_5, 'V', entity_8-1);
  entity_5[entity_8-1]='0';
  entity_3 = (char*)malloc(24*sizeof(char));
  entity_3[0]='0';
  entity_8 = 4;
  memcpy(entity_3, entity_5, entity_8*sizeof(char));
}
void fun()
{
  int entity_3 = 52;
  int entity_2 = 62;
  char entity_5[97] = "";
  char entity_1 = 'P';
  char* entity_0;
  char entity_4[entity_3] = "";
  memset(entity_5, 'B', 97-1);
  entity_5[97-1]='0';
  memset(entity_4, 'n', entity_3-1);
  entity_4[entity_3-1]='0';
  entity_0 = (char*)malloc(20*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_4, entity_3*sizeof(char));
}
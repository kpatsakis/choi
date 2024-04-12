void fun()
{
  int entity_7 = 88;
  char* entity_3;
  char entity_2[entity_7] = "";
  char entity_1[65] = "";
  char entity_8[97] = "";
  memset(entity_1, 'p', 65-1);
  entity_1[65-1]='0';
  entity_3 = (char*)malloc(10*sizeof(char));
  entity_3[0]='0';
  memset(entity_2, 'y', entity_7-1);
  entity_2[entity_7-1]='0';
  memset(entity_8, 'W', 97-1);
  entity_8[97-1]='0';
  memcpy(entity_3, entity_2, entity_7*sizeof(char));
}
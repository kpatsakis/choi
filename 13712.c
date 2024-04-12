void fun()
{
  int entity_7 = 88;
  int entity_8 = 2;
  entity_7 = 29;
  char entity_2[55] = "";
  char entity_1[entity_7] = "";
  char entity_5[61] = "";
  char* entity_3;
  memset(entity_1, 'U', entity_7-1);
  entity_1[entity_7-1]='0';
  memset(entity_5, 'X', 61-1);
  entity_5[61-1]='0';
  entity_3 = (char*)malloc(22*sizeof(char));
  entity_3[0]='0';
  memset(entity_2, 'd', 55-1);
  entity_2[55-1]='0';
  memcpy(entity_3, entity_1, entity_7*sizeof(char));
}
void fun()
{
  int entity_8 = 93;
  int entity_3 = 29;
  char entity_1[26] = "";
  entity_1 = NULL;
  char* entity_4;
  char entity_7[98] = "";
  entity_7 = NULL;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_1, 'A', 26-1);
  entity_1[26-1]='';
  memset(entity_7, 'u', 98-1);
  entity_7[98-1]='';
  entity_3 = 84;
  memcpy(entity_4, entity_1, 26*sizeof(char));
}
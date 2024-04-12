void fun()
{
  int entity_9 = 14;
  int entity_1 = 91;
  char entity_4[7] = "";
  entity_4 = NULL;
  char entity_2[35] = "";
  entity_2 = NULL;
  char* entity_6;
  char entity_8[98] = "";
  entity_8 = NULL;
  memset(entity_4, 'G', 7-1);
  entity_4[7-1]='';
  memset(entity_8, 'Y', 98-1);
  entity_8[98-1]='';
  memset(entity_2, 'b', 35-1);
  entity_2[35-1]='';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  memcpy(entity_6, entity_4, 7*sizeof(char));
}
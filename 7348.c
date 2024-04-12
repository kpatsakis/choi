void fun()
{
  int entity_5 = 63;
  char* entity_2;
  char entity_8[19] = "";
  entity_8 = NULL;
  char entity_1 = 'n';
  char entity_4[26] = "";
  entity_4 = NULL;
  char entity_3[11] = "";
  entity_3 = NULL;
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memset(entity_4, 'w', 26-1);
  entity_4[26-1]='';
  memset(entity_3, 'c', 11-1);
  entity_3[11-1]='';
  memset(entity_8, 'Y', 19-1);
  entity_8[19-1]='';
  memcpy(entity_2, entity_3, 11*sizeof(char));
}
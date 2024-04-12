void fun()
{
  int entity_5 = 39;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char entity_2[65] = "";
  entity_2 = NULL;
  char entity_3[11] = "";
  entity_3 = NULL;
  char* entity_4;
  char entity_6[51] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(55*sizeof(char));
  entity_4[55-1]='';
  memset(entity_6, 'g', 51-1);
  entity_6[51-1]='';
  memset(entity_2, 'g', 65-1);
  entity_2[65-1]='';
  memset(entity_3, 'w', 11-1);
  entity_3[11-1]='';
  memset(entity_8, 'z', entity_5-1);
  entity_8[entity_5-1]='';
  entity_5 = 93;
  memcpy(entity_4, entity_8, entity_5*sizeof(char));
}
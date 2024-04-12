void fun()
{
  int entity_5 = 62;
  char entity_2[11] = "";
  entity_2 = NULL;
  char entity_7[58] = "";
  entity_7 = NULL;
  char* entity_8;
  char* entity_1;
  char entity_4[28] = "";
  entity_4 = NULL;
  memset(entity_2, 'B', 11-1);
  entity_2[11-1]='';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  memset(entity_4, 'B', 28-1);
  entity_4[28-1]='';
  memset(entity_7, 'l', 58-1);
  entity_7[58-1]='';
  entity_1 = (char*)malloc(55*sizeof(char));
  entity_1[55-1]='';
  strcpy(entity_8, entity_4);
}
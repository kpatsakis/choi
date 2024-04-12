void fun()
{
  int entity_1 = 72;
  char* entity_4;
  char entity_2[4] = "";
  entity_2 = NULL;
  char* entity_8;
  char entity_5[81] = "";
  entity_5 = NULL;
  memset(entity_5, 'f', 81-1);
  entity_5[81-1]='';
  entity_8 = (char*)malloc(24*sizeof(char));
  entity_8[24-1]='';
  memset(entity_2, 'W', 4-1);
  entity_2[4-1]='';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  entity_1 = 35;
  strcpy(entity_4, entity_2);
}
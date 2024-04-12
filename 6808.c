void fun()
{
  int entity_7 = 19;
  char* entity_1;
  char entity_5[98] = "";
  entity_5 = NULL;
  char entity_4[37] = "";
  entity_4 = NULL;
  memset(entity_4, 'B', 37-1);
  entity_4[37-1]='';
  memset(entity_5, 'G', 98-1);
  entity_5[98-1]='';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  entity_7 = 16;
  strcpy(entity_1, entity_4);
}
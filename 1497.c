void fun()
{
  int entity_4 = 54;
  entity_4 = 14;
  char entity_6[11] = "";
  entity_6 = NULL;
  char entity_7[86] = "";
  entity_7 = NULL;
  char entity_2[98] = "";
  entity_2 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  memset(entity_7, 'W', 86-1);
  entity_7[86-1]='';
  memset(entity_6, 'O', 11-1);
  entity_6[11-1]='';
  memset(entity_2, 'a', 98-1);
  entity_2[98-1]='';
  strcpy(entity_1, entity_6);
}
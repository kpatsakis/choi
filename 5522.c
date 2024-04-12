void fun()
{
  int entity_7 = 14;
  entity_7 = 14;
  char entity_8[30] = "";
  entity_8 = NULL;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  char* entity_4;
  char entity_1 = 'u';
  memset(entity_2, 'i', entity_7-1);
  entity_2[entity_7-1]='';
  memset(entity_8, 'k', 30-1);
  entity_8[30-1]='';
  entity_4 = (char*)malloc(81*sizeof(char));
  entity_4[81-1]='';
  strcpy(entity_4, entity_2);
}
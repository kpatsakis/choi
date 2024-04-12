void fun()
{
  int entity_1 = 42;
  int entity_7 = 30;
  entity_7 = 30;
  char* entity_5;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char entity_2[41] = "";
  entity_2 = NULL;
  char entity_8[10] = "";
  entity_8 = NULL;
  entity_5 = (char*)malloc(55*sizeof(char));
  entity_5[55-1]='';
  memset(entity_2, 'P', 41-1);
  entity_2[41-1]='';
  memset(entity_3, 'U', entity_7-1);
  entity_3[entity_7-1]='';
  memset(entity_8, 's', 10-1);
  entity_8[10-1]='';
  strcpy(entity_5, entity_3);
}
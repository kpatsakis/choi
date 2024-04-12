void fun()
{
  int entity_1 = 3;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char* entity_2;
  char entity_6[14] = "";
  entity_6 = NULL;
  memset(entity_5, 'G', entity_1-1);
  entity_5[entity_1-1]='';
  entity_2 = (char*)malloc(3*sizeof(char));
  entity_2[3-1]='';
  memset(entity_6, 'n', 14-1);
  entity_6[14-1]='';
  entity_1 = 31;
  strcpy(entity_2, entity_5);
}
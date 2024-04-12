void fun()
{
  int entity_7 = 55;
  entity_7 = 55;
  char entity_3[65] = "";
  entity_3 = NULL;
  char* entity_1;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  char entity_9 = 'G';
  memset(entity_3, 'x', 65-1);
  entity_3[65-1]='';
  entity_1 = (char*)malloc(18*sizeof(char));
  entity_1[18-1]='';
  memset(entity_2, 'm', entity_7-1);
  entity_2[entity_7-1]='';
  strcpy(entity_1, entity_2);
}
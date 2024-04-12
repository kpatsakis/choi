void fun()
{
  int entity_6 = 76;
  char* entity_5;
  char entity_3[13] = "";
  entity_3 = NULL;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char entity_9 = 'I';
  entity_5 = (char*)malloc(21*sizeof(char));
  entity_5[21-1]='';
  memset(entity_1, 'L', entity_6-1);
  entity_1[entity_6-1]='';
  memset(entity_3, 'l', 13-1);
  entity_3[13-1]='';
  strcpy(entity_5, entity_1);
}
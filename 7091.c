void fun()
{
  int entity_7 = 15;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char entity_1[33] = "";
  entity_1 = NULL;
  char entity_6 = 'z';
  char* entity_4;
  memset(entity_1, 'u', 33-1);
  entity_1[33-1]='';
  entity_4 = (char*)malloc(58*sizeof(char));
  entity_4[58-1]='';
  memset(entity_5, 'O', entity_7-1);
  entity_5[entity_7-1]='';
  strcpy(entity_4, entity_5);
}
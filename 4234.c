void fun()
{
  int entity_5 = 13;
  char* entity_7;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char entity_3[46] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(17*sizeof(char));
  entity_7[17-1]='';
  memset(entity_1, 'G', entity_5-1);
  entity_1[entity_5-1]='';
  memset(entity_3, 'p', 46-1);
  entity_3[46-1]='';
  strcpy(entity_7, entity_1);
}
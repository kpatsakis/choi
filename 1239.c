void fun()
{
  int entity_5 = 70;
  entity_5 = 22;
  char entity_0 = 'r';
  char entity_6[44] = "";
  entity_6 = NULL;
  char* entity_2;
  char entity_4[98] = "";
  entity_4 = NULL;
  memset(entity_6, 't', 44-1);
  entity_6[44-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memset(entity_4, 'x', 98-1);
  entity_4[98-1]='';
  strcpy(entity_2, entity_6);
}
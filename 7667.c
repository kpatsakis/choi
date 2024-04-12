void fun()
{
  int entity_4 = 79;
  int entity_3 = 43;
  char entity_7[19] = "";
  entity_7 = NULL;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  char* entity_8;
  memset(entity_5, 'A', entity_4-1);
  entity_5[entity_4-1]='';
  memset(entity_7, 'O', 19-1);
  entity_7[19-1]='';
  entity_8 = (char*)malloc(87*sizeof(char));
  entity_8[87-1]='';
  strcpy(entity_8, entity_5);
}
void fun()
{
  int entity_7 = 78;
  char entity_2[93] = "";
  entity_2 = NULL;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char entity_5[19] = "";
  entity_5 = NULL;
  char* entity_4;
  memset(entity_2, 'l', 93-1);
  entity_2[93-1]='';
  memset(entity_8, 'w', entity_7-1);
  entity_8[entity_7-1]='';
  entity_4 = (char*)malloc(87*sizeof(char));
  entity_4[87-1]='';
  memset(entity_5, 'N', 19-1);
  entity_5[19-1]='';
  strcpy(entity_4, entity_8);
}
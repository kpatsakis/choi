void fun()
{
  int entity_7 = 72;
  int entity_3 = 54;
  char* entity_4;
  char entity_2 = 'Q';
  char entity_5[16] = "";
  entity_5 = NULL;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  memset(entity_8, 'F', entity_7-1);
  entity_8[entity_7-1]='';
  memset(entity_5, 'y', 16-1);
  entity_5[16-1]='';
  entity_4 = (char*)malloc(87*sizeof(char));
  entity_4[87-1]='';
  strcpy(entity_4, entity_8);
}
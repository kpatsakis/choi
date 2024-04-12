void fun()
{
  int entity_7 = 48;
  int entity_4 = 38;
  int entity_0 = 54;
  char* entity_1;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char* entity_5;
  memset(entity_6, 'x', entity_7-1);
  entity_6[entity_7-1]='';
  entity_5 = (char*)malloc(51*sizeof(char));
  entity_5[51-1]='';
  entity_1 = (char*)malloc(87*sizeof(char));
  entity_1[87-1]='';
  entity_7 = 94;
  strcpy(entity_5, entity_6);
}
void fun()
{
  int entity_0 = 22;
  char* entity_5;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char* entity_7;
  char entity_2[61] = "";
  entity_2 = NULL;
  entity_7 = (char*)malloc(42*sizeof(char));
  entity_7[42-1]='';
  memset(entity_2, 'l', 61-1);
  entity_2[61-1]='';
  memset(entity_4, 'm', entity_0-1);
  entity_4[entity_0-1]='';
  entity_5 = (char*)malloc(29*sizeof(char));
  entity_5[29-1]='';
  strcpy(entity_7, entity_4);
}
void fun()
{
  int entity_1 = 48;
  char* entity_4;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char* entity_5;
  memset(entity_7, 'e', entity_1-1);
  entity_7[entity_1-1]='';
  entity_5 = (char*)malloc(39*sizeof(char));
  entity_5[39-1]='';
  entity_4 = (char*)malloc(29*sizeof(char));
  entity_4[29-1]='';
  strcpy(entity_4, entity_7);
}
void fun()
{
  int entity_0 = 95;
  char entity_7 = 'Q';
  char* entity_6;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(43*sizeof(char));
  entity_6[43-1]='';
  memset(entity_1, 'V', entity_0-1);
  entity_1[entity_0-1]='';
  strcpy(entity_6, entity_1);
}
void fun()
{
  char* entity_8;
  char entity_1[65] = "";
  entity_1 = NULL;
  char entity_9[81] = "";
  entity_9 = NULL;
  entity_8 = (char*)malloc(44*sizeof(char));
  entity_8[44-1]='';
  memset(entity_9, 'b', 81-1);
  entity_9[81-1]='';
  memset(entity_1, 'h', 65-1);
  entity_1[65-1]='';
  strcpy(entity_8, entity_1);
}
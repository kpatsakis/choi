void fun()
{
  int entity_6 = 26;
  char* entity_4;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  memset(entity_1, 'q', entity_6-1);
  entity_1[entity_6-1]='';
  entity_4 = (char*)malloc(37*sizeof(char));
  entity_4[37-1]='';
  entity_6 = 53;
  strcpy(entity_4, entity_1);
}
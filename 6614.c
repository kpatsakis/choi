void fun()
{
  int entity_8 = 11;
  entity_8 = 86;
  char* entity_6;
  char entity_5[22] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memset(entity_5, 'S', 22-1);
  entity_5[22-1]='';
  strcpy(entity_6, entity_5);
}
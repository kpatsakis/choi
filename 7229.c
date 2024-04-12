void fun()
{
  int entity_8 = 71;
  char entity_5[29] = "";
  entity_5 = NULL;
  char* entity_6;
  memset(entity_5, 'W', 29-1);
  entity_5[29-1]='';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  entity_8 = 56;
  strcpy(entity_6, entity_5);
}
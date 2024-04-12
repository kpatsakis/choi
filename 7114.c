void fun()
{
  int entity_5 = 61;
  int entity_3 = 29;
  char* entity_8;
  char entity_6[72] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memset(entity_6, 'l', 72-1);
  entity_6[72-1]='';
  strcpy(entity_8, entity_6);
}
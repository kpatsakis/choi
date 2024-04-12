void fun()
{
  int entity_8 = 92;
  int entity_3 = 33;
  char entity_6[65] = "";
  entity_6 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  memset(entity_6, 'l', 65-1);
  entity_6[65-1]='';
  entity_3 = 71;
  strcpy(entity_7, entity_6);
}
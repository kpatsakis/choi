void fun()
{
  int entity_4 = 33;
  entity_4 = 71;
  char entity_7 = 'B';
  char entity_6[62] = "";
  entity_6 = NULL;
  char* entity_8;
  memset(entity_6, 'H', 62-1);
  entity_6[62-1]='';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  strcpy(entity_8, entity_6);
}
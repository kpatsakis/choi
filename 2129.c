void fun()
{
  int entity_0 = 87;
  int entity_4 = 54;
  char entity_6 = 'p';
  char entity_7[85] = "";
  entity_7 = NULL;
  char* entity_8;
  memset(entity_7, 'l', 85-1);
  entity_7[85-1]='';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  entity_4 = 94;
  strcpy(entity_8, entity_7);
}
void fun()
{
  int entity_4 = 46;
  char* entity_3;
  char entity_8[33] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memset(entity_8, 'H', 33-1);
  entity_8[33-1]='';
  strcpy(entity_3, entity_8);
}
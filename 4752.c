void fun()
{
  int entity_8 = 86;
  char* entity_4;
  char entity_7[6] = "";
  entity_7 = NULL;
  memset(entity_7, 'c', 6-1);
  entity_7[6-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  entity_8 = 88;
  strcpy(entity_4, entity_7);
}
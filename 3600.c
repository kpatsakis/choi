void fun()
{
  int entity_8 = 87;
  entity_8 = 52;
  char* entity_1;
  char entity_7[98] = "";
  entity_7 = NULL;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  memset(entity_7, 'K', 98-1);
  entity_7[98-1]='';
  strcpy(entity_1, entity_7);
}
void fun()
{
  int entity_4 = 46;
  char* entity_5;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  entity_5 = (char*)malloc(51*sizeof(char));
  entity_5[51-1]='';
  memset(entity_8, 'H', entity_4-1);
  entity_8[entity_4-1]='';
  entity_4 = 21;
  strcpy(entity_5, entity_8);
}
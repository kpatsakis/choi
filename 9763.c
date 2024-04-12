void fun()
{
  int entity_1 = 73;
  int entity_5 = 41;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char* entity_7;
  memset(entity_8, 'N', entity_5-1);
  entity_8[entity_5-1]='';
  entity_7 = (char*)malloc(51*sizeof(char));
  entity_7[51-1]='';
  strcpy(entity_7, entity_8);
}
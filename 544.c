void fun()
{
  int entity_0 = 17;
  char* entity_5;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  memset(entity_8, 'K', entity_0-1);
  entity_8[entity_0-1]='';
  entity_5 = (char*)malloc(43*sizeof(char));
  entity_5[43-1]='';
  strcpy(entity_5, entity_8);
}
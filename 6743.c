void fun()
{
  int entity_0 = 6;
  entity_0 = 6;
  char* entity_7;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  memset(entity_8, 'h', entity_0-1);
  entity_8[entity_0-1]='';
  entity_7 = (char*)malloc(98*sizeof(char));
  entity_7[98-1]='';
  strcpy(entity_7, entity_8);
}
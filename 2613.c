void fun()
{
  int entity_0 = 70;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(76*sizeof(char));
  entity_5[76-1]='';
  memset(entity_8, 'J', entity_0-1);
  entity_8[entity_0-1]='';
  entity_0 = 38;
  memcpy(entity_5, entity_8, entity_0*sizeof(char));
}
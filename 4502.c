void fun()
{
  int entity_1 = 71;
  int entity_3 = 17;
  char entity_0[51] = "";
  entity_0 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  memset(entity_0, 'J', 51-1);
  entity_0[51-1]='';
  entity_1 = 60;
  strcpy(entity_8, entity_0);
}
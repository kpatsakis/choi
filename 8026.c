void fun()
{
  int entity_5 = 93;
  int entity_7 = 72;
  char* entity_1;
  char entity_0[51] = "";
  entity_0 = NULL;
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_0, 'W', 51-1);
  entity_0[51-1]='';
  strcpy(entity_1, entity_0);
}
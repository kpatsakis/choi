void fun()
{
  int entity_0 = 18;
  entity_0 = 41;
  char* entity_2;
  char entity_1[32] = "";
  entity_1 = NULL;
  memset(entity_1, 'x', 32-1);
  entity_1[32-1]='';
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[entity_0-1]='';
  strcpy(entity_2, entity_1);
}
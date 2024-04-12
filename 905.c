void fun()
{
  int entity_4 = 48;
  char entity_1[32] = "";
  entity_1 = NULL;
  char* entity_0;
  memset(entity_1, 'u', 32-1);
  entity_1[32-1]='';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  strcpy(entity_0, entity_1);
}
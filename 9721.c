void fun()
{
  int entity_7 = 29;
  char entity_1[63] = "";
  entity_1 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memset(entity_1, 'X', 63-1);
  entity_1[63-1]='';
  strcpy(entity_0, entity_1);
}
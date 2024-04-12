void fun()
{
  int entity_4 = 85;
  char entity_0[94] = "";
  entity_0 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  memset(entity_0, 'u', 94-1);
  entity_0[94-1]='';
  strcpy(entity_8, entity_0);
}
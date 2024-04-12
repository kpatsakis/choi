void fun()
{
  int entity_3 = 28;
  char* entity_8;
  char entity_0[96] = "";
  entity_0 = NULL;
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memset(entity_0, 'E', 96-1);
  entity_0[96-1]='';
  strcpy(entity_8, entity_0);
}
void fun()
{
  int entity_2 = 53;
  char entity_0[65] = "";
  entity_0 = NULL;
  char* entity_4;
  memset(entity_0, 'i', 65-1);
  entity_0[65-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  strcpy(entity_4, entity_0);
}
void fun()
{
  int entity_3 = 95;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(20*sizeof(char));
  entity_8[20-1]='';
  memset(entity_0, 'K', entity_3-1);
  entity_0[entity_3-1]='';
  entity_3 = 73;
  entity_0[18] = 'U';
}
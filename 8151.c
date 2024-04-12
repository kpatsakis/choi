void fun()
{
  int entity_7 = 23;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char* entity_8;
  memset(entity_0, 'X', entity_7-1);
  entity_0[entity_7-1]='';
  entity_8 = (char*)malloc(96*sizeof(char));
  entity_8[96-1]='';
  entity_7 = 21;
  entity_0[30] = 't';
}
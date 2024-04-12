void fun()
{
  int entity_8 = 38;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(81*sizeof(char));
  entity_2[81-1]='';
  memset(entity_0, 'Q', entity_8-1);
  entity_0[entity_8-1]='';
  memcpy(entity_2, entity_0, entity_8*sizeof(char));
}
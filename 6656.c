void fun()
{
  int entity_4 = 51;
  entity_4 = 52;
  char* entity_0;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  memset(entity_2, 'h', entity_4-1);
  entity_2[entity_4-1]='';
  entity_0 = (char*)malloc(81*sizeof(char));
  entity_0[81-1]='';
  memcpy(entity_0, entity_2, entity_4*sizeof(char));
}
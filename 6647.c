void fun()
{
  int entity_8 = 69;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(8*sizeof(char));
  entity_0[8-1]='';
  memset(entity_6, 'L', entity_8-1);
  entity_6[entity_8-1]='';
  memcpy(entity_0, entity_6, entity_8*sizeof(char));
}
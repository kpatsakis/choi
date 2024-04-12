void fun()
{
  int entity_8 = 73;
  char* entity_7;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  memset(entity_0, 'W', entity_8-1);
  entity_0[entity_8-1]='';
  entity_7 = (char*)malloc(96*sizeof(char));
  entity_7[96-1]='';
  entity_8 = 2;
  memcpy(entity_7, entity_0, entity_8*sizeof(char));
}
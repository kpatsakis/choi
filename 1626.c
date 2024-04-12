void fun()
{
  int entity_0 = 11;
  char* entity_4;
  char entity_3[32] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  memset(entity_3, 'y', 32-1);
  entity_3[32-1]='';
  entity_0 = 32;
  memcpy(entity_4, entity_3, 32*sizeof(char));
}
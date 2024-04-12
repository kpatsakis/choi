void fun()
{
  int entity_9 = 87;
  char entity_8[12] = "";
  entity_8 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  memset(entity_8, 'b', 12-1);
  entity_8[12-1]='';
  memcpy(entity_0, entity_8, 12*sizeof(char));
}
void fun()
{
  int entity_0 = 33;
  char entity_9[65] = "";
  entity_9 = NULL;
  char* entity_8;
  char entity_5 = 'Y';
  memset(entity_9, 'k', 65-1);
  entity_9[65-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memcpy(entity_8, entity_9, 65*sizeof(char));
}
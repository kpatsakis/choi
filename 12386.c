void fun()
{
  int entity_9 = 96;
  char* entity_8;
  char entity_0[32] = "";
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[0]='0';
  memset(entity_0, 'T', 32-1);
  entity_0[32-1]='0';
  memcpy(entity_8, entity_0, 32*sizeof(char));
}
void fun()
{
  int entity_9 = 33;
  int entity_6 = 99;
  char* entity_1;
  char entity_0[32] = "";
  entity_0 = NULL;
  char entity_7 = 't';
  entity_1 = (char*)malloc(18*sizeof(char));
  entity_1[18-1]='';
  memset(entity_0, 'S', 32-1);
  entity_0[32-1]='';
  memcpy(entity_1, entity_0, 32*sizeof(char));
}
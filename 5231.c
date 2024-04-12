void fun()
{
  char entity_0[32] = "";
  entity_0 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(78*sizeof(char));
  entity_1[78-1]='';
  memset(entity_0, 'm', 32-1);
  entity_0[32-1]='';
  memcpy(entity_1, entity_0, 32*sizeof(char));
}
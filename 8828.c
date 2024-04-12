void fun()
{
  char entity_5 = 'j';
  char* entity_4;
  char entity_0[32] = "";
  entity_0 = NULL;
  entity_4 = (char*)malloc(22*sizeof(char));
  entity_4[22-1]='';
  memset(entity_0, 'f', 32-1);
  entity_0[32-1]='';
  memcpy(entity_4, entity_0, 32*sizeof(char));
}
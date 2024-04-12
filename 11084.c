void fun()
{
  char entity_0[31] = "";
  char* entity_9;
  entity_9 = (char*)malloc(16*sizeof(char));
  entity_9[0]='0';
  memset(entity_0, 'G', 31-1);
  entity_0[31-1]='0';
  memcpy(entity_9, entity_0, 31*sizeof(char));
}
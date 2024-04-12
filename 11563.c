void fun()
{
  char* entity_9;
  char entity_5[64] = "";
  entity_9 = (char*)malloc(32*sizeof(char));
  entity_9[0]='0';
  memset(entity_5, 'h', 64-1);
  entity_5[64-1]='0';
  memcpy(entity_9, entity_5, 64*sizeof(char));
}
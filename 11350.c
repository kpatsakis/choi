void fun()
{
  char* entity_0;
  char entity_4[30] = "";
  entity_0 = (char*)malloc(72*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'K', 30-1);
  entity_4[30-1]='0';
  memcpy(entity_0, entity_4, 30*sizeof(char));
}
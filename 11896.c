void fun()
{
  char entity_6[39] = "";
  char* entity_0;
  entity_0 = (char*)malloc(41*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'c', 39-1);
  entity_6[39-1]='0';
  memcpy(entity_0, entity_6, 39*sizeof(char));
}
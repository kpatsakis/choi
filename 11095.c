void fun()
{
  char* entity_0;
  char entity_6[41] = "";
  entity_0 = (char*)malloc(42*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'E', 41-1);
  entity_6[41-1]='0';
  memcpy(entity_0, entity_6, 41*sizeof(char));
}
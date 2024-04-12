void fun()
{
  int entity_7 = 91;
  int entity_0 = 11;
  char entity_6[26] = "";
  char* entity_9;
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'U', 26-1);
  entity_6[26-1]='0';
  entity_0 = 73;
  memcpy(entity_9, entity_6, 26*sizeof(char));
}
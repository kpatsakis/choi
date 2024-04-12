void fun()
{
  int entity_7 = 82;
  char* entity_0;
  char entity_4 = 'I';
  char entity_1[41] = "";
  entity_0 = (char*)malloc(80*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'x', 41-1);
  entity_1[41-1]='0';
  memcpy(entity_0, entity_1, 41*sizeof(char));
}
void fun()
{
  int entity_0 = 86;
  char entity_1[80] = "";
  char* entity_6;
  char entity_5 = 'n';
  memset(entity_1, 'P', 80-1);
  entity_1[80-1]='0';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[0]='0';
  entity_0 = 31;
  memcpy(entity_6, entity_1, 80*sizeof(char));
}
void fun()
{
  int entity_1 = 41;
  entity_1 = 83;
  char* entity_8;
  char entity_0[26] = "";
  memset(entity_0, 'P', 26-1);
  entity_0[26-1]='0';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_0);
}
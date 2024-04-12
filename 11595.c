void fun()
{
  int entity_4 = 14;
  char* entity_6;
  char entity_0[50] = "";
  entity_6 = (char*)malloc(59*sizeof(char));
  entity_6[0]='0';
  memset(entity_0, 'X', 50-1);
  entity_0[50-1]='0';
  strcpy(entity_6, entity_0);
}
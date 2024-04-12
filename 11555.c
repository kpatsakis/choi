void fun()
{
  char* entity_0;
  char entity_7 = 'W';
  char entity_6[32] = "";
  memset(entity_6, 'P', 32-1);
  entity_6[32-1]='0';
  entity_0 = (char*)malloc(5*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_6);
}
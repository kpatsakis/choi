void fun()
{
  int entity_0 = 91;
  entity_0 = 56;
  char entity_4 = 'm';
  char entity_2 = 'E';
  char entity_6[91] = "";
  char* entity_7;
  memset(entity_6, 'W', 91-1);
  entity_6[91-1]='0';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_6);
}
void fun()
{
  int entity_1 = 83;
  int entity_0 = 71;
  char* entity_6;
  char entity_2[91] = "";
  memset(entity_2, 'C', 91-1);
  entity_2[91-1]='0';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_2);
}
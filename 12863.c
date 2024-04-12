void fun()
{
  int entity_7 = 61;
  char entity_2[91] = "";
  char* entity_8;
  char entity_0[42] = "";
  memset(entity_0, 'o', 42-1);
  entity_0[42-1]='0';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'F', 91-1);
  entity_2[91-1]='0';
  strcpy(entity_8, entity_0);
}
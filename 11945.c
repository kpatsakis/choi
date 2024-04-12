void fun()
{
  char entity_8 = 'A';
  char entity_0[91] = "";
  char entity_1[64] = "";
  char* entity_5;
  memset(entity_0, 'S', 91-1);
  entity_0[91-1]='0';
  memset(entity_1, 'y', 64-1);
  entity_1[64-1]='0';
  entity_5 = (char*)malloc(16*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_0);
}
void fun()
{
  char entity_1[76] = "";
  char* entity_4;
  char entity_0[99] = "";
  memset(entity_0, 'z', 99-1);
  entity_0[99-1]='0';
  memset(entity_1, 'r', 76-1);
  entity_1[76-1]='0';
  entity_4 = (char*)malloc(36*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_0);
}
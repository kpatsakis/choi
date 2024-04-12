void fun()
{
  char entity_7[89] = "";
  char entity_6[32] = "";
  char* entity_4;
  char* entity_0;
  char entity_2 = 'A';
  entity_0 = (char*)malloc(11*sizeof(char));
  entity_0[0]='0';
  entity_4 = (char*)malloc(89*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'l', 89-1);
  entity_7[89-1]='0';
  memset(entity_6, 'k', 32-1);
  entity_6[32-1]='0';
  strcpy(entity_0, entity_6);
}
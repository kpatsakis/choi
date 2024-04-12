void fun()
{
  char entity_0[2] = "";
  char* entity_4;
  char entity_1[100] = "";
  char entity_7 = 'p';
  char entity_6 = 'T';
  memset(entity_1, 'D', 100-1);
  entity_1[100-1]='0';
  entity_4 = (char*)malloc(21*sizeof(char));
  entity_4[0]='0';
  memset(entity_0, 'K', 2-1);
  entity_0[2-1]='0';
  strcpy(entity_4, entity_1);
}
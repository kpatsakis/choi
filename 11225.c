void fun()
{
  char* entity_1;
  char entity_4[56] = "";
  char entity_0[22] = "";
  char entity_7[19] = "";
  entity_1 = (char*)malloc(6*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'f', 22-1);
  entity_0[22-1]='0';
  memset(entity_7, 'O', 19-1);
  entity_7[19-1]='0';
  memset(entity_4, 'f', 56-1);
  entity_4[56-1]='0';
  strcpy(entity_1, entity_0);
}
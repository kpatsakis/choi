void fun()
{
  char entity_0[29] = "";
  char* entity_1;
  char* entity_4;
  char entity_2[19] = "";
  memset(entity_0, 'l', 29-1);
  entity_0[29-1]='0';
  memset(entity_2, 'F', 19-1);
  entity_2[19-1]='0';
  entity_4 = (char*)malloc(90*sizeof(char));
  entity_4[0]='0';
  entity_1 = (char*)malloc(38*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_0);
}
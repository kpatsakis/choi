void fun()
{
  char* entity_5;
  char entity_1[74] = "";
  char* entity_4;
  char entity_6[9] = "";
  memset(entity_1, 'n', 74-1);
  entity_1[74-1]='0';
  entity_4 = (char*)malloc(75*sizeof(char));
  entity_4[0]='0';
  entity_5 = (char*)malloc(44*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'D', 9-1);
  entity_6[9-1]='0';
  entity_1[14] = 'Q';
}
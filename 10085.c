void fun()
{
  char entity_0 = 'N';
  char* entity_8;
  char entity_1[38] = "";
  char* entity_5;
  entity_5 = (char*)malloc(16*sizeof(char));
  entity_5[0]='0';
  memset(entity_1, 'X', 38-1);
  entity_1[38-1]='0';
  entity_8 = (char*)malloc(40*sizeof(char));
  entity_8[0]='0';
  entity_1[83] = 'c';
}
void fun()
{
  char* entity_4;
  char entity_6[42] = "";
  char entity_3[18] = "";
  char* entity_0;
  entity_0 = (char*)malloc(33*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'R', 42-1);
  entity_6[42-1]='0';
  memset(entity_3, 'l', 18-1);
  entity_3[18-1]='0';
  entity_4 = (char*)malloc(81*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_6, 42*sizeof(char));
}
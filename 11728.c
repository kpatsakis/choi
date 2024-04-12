void fun()
{
  char entity_5[42] = "";
  char* entity_6;
  char entity_3[76] = "";
  char entity_4 = 'F';
  char* entity_0;
  memset(entity_5, 'a', 42-1);
  entity_5[42-1]='0';
  memset(entity_3, 'E', 76-1);
  entity_3[76-1]='0';
  entity_6 = (char*)malloc(53*sizeof(char));
  entity_6[0]='0';
  entity_0 = (char*)malloc(15*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_6, entity_5, 42*sizeof(char));
}
void fun()
{
  char entity_8[61] = "";
  char entity_3 = 'x';
  char entity_5[60] = "";
  char* entity_1;
  char* entity_0;
  memset(entity_8, 'K', 61-1);
  entity_8[61-1]='0';
  entity_1 = (char*)malloc(95*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'X', 60-1);
  entity_5[60-1]='0';
  entity_0 = (char*)malloc(55*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_5, 60*sizeof(char));
}
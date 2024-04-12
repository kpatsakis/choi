void fun()
{
  char entity_2 = 'x';
  char* entity_8;
  char entity_1[5] = "";
  char entity_3[75] = "";
  char entity_0 = 'v';
  memset(entity_1, 'T', 5-1);
  entity_1[5-1]='0';
  memset(entity_3, 'w', 75-1);
  entity_3[75-1]='0';
  entity_8 = (char*)malloc(58*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_1, 5*sizeof(char));
}
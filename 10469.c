void fun()
{
  char* entity_4;
  char entity_8[61] = "";
  char* entity_5;
  entity_4 = (char*)malloc(31*sizeof(char));
  entity_4[0]='0';
  memset(entity_8, 'W', 61-1);
  entity_8[61-1]='0';
  entity_5 = (char*)malloc(18*sizeof(char));
  entity_5[0]='0';
  entity_8[67] = 'V';
}
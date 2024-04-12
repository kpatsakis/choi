void fun()
{
  char* entity_5;
  char entity_3 = 'm';
  char entity_8[23] = "";
  memset(entity_8, 'l', 23-1);
  entity_8[23-1]='0';
  entity_5 = (char*)malloc(4*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_8, 23*sizeof(char));
}
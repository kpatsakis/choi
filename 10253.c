void fun()
{
  char entity_5[85] = "";
  char* entity_8;
  memset(entity_5, 'm', 85-1);
  entity_5[85-1]='0';
  entity_8 = (char*)malloc(24*sizeof(char));
  entity_8[0]='0';
  entity_5[69] = 'x';
}
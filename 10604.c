void fun()
{
  char* entity_8;
  char entity_7[58] = "";
  memset(entity_7, 'y', 58-1);
  entity_7[58-1]='0';
  entity_8 = (char*)malloc(11*sizeof(char));
  entity_8[0]='0';
  entity_7[90] = 'A';
}
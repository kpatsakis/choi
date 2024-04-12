void fun()
{
  char* entity_8;
  char entity_7[75] = "";
  entity_8 = (char*)malloc(33*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'l', 75-1);
  entity_7[75-1]='0';
  entity_7[96] = 'f';
}
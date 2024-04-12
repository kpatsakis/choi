void fun()
{
  char* entity_8;
  char entity_6[5] = "";
  memset(entity_6, 'V', 5-1);
  entity_6[5-1]='0';
  entity_8 = (char*)malloc(56*sizeof(char));
  entity_8[0]='0';
  entity_6[77] = 'V';
}
void fun()
{
  char entity_3 = 'M';
  char entity_6[58] = "";
  entity_6 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(38*sizeof(char));
  entity_8[38-1]='';
  memset(entity_6, 'L', 58-1);
  entity_6[58-1]='';
  entity_6[42] = 'c';
}
void fun()
{
  char* entity_6;
  char entity_4[33] = "";
  entity_4 = NULL;
  entity_6 = (char*)malloc(48*sizeof(char));
  entity_6[48-1]='';
  memset(entity_4, 'v', 33-1);
  entity_4[33-1]='';
  entity_4[76] = 'h';
}
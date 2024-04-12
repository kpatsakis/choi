void fun()
{
  char entity_6[44] = "";
  char* entity_4;
  entity_4 = (char*)malloc(9*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'j', 44-1);
  entity_6[44-1]='0';
  strcpy(entity_4, entity_6);
}
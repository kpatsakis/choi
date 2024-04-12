void fun()
{
  char entity_5[37] = "";
  char* entity_8;
  char* entity_4;
  entity_8 = (char*)malloc(75*sizeof(char));
  entity_8[0]='0';
  entity_4 = (char*)malloc(74*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'f', 37-1);
  entity_5[37-1]='0';
  strcpy(entity_4, entity_5);
}
void fun()
{
  char entity_6[23] = "";
  char* entity_8;
  memset(entity_6, 'q', 23-1);
  entity_6[23-1]='0';
  entity_8 = (char*)malloc(30*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_6);
}
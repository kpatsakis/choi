void fun()
{
  char* entity_7;
  char entity_0[48] = "";
  entity_7 = (char*)malloc(21*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'l', 48-1);
  entity_0[48-1]='0';
  strcpy(entity_7, entity_0);
}
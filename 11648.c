void fun()
{
  char* entity_0;
  char entity_8[34] = "";
  memset(entity_8, 'S', 34-1);
  entity_8[34-1]='0';
  entity_0 = (char*)malloc(9*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_8);
}
void fun()
{
  char entity_8[68] = "";
  char* entity_0;
  entity_0 = (char*)malloc(23*sizeof(char));
  entity_0[0]='0';
  memset(entity_8, 'B', 68-1);
  entity_8[68-1]='0';
  strcpy(entity_0, entity_8);
}
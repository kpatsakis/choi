void fun()
{
  char entity_0[49] = "";
  char* entity_1;
  entity_1 = (char*)malloc(99*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'C', 49-1);
  entity_0[49-1]='0';
  strcpy(entity_1, entity_0);
}
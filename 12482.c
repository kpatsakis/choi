void fun()
{
  int entity_5 = 11;
  char* entity_1;
  char entity_0[25] = "";
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'A', 25-1);
  entity_0[25-1]='0';
  strcpy(entity_1, entity_0);
}
void fun()
{
  int entity_3 = 31;
  char entity_4[57] = "";
  char* entity_0;
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'G', 57-1);
  entity_4[57-1]='0';
  entity_3 = 91;
  strcpy(entity_0, entity_4);
}
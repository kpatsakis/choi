void fun()
{
  int entity_4 = 99;
  entity_4 = 73;
  char entity_0[57] = "";
  char* entity_3;
  memset(entity_0, 'Q', 57-1);
  entity_0[57-1]='0';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_0);
}
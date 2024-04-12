void fun()
{
  int entity_3 = 56;
  char entity_0[27] = "";
  char* entity_4;
  memset(entity_0, 'x', 27-1);
  entity_0[27-1]='0';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_0);
}
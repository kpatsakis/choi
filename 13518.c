void fun()
{
  int entity_2 = 13;
  char entity_0[96] = "";
  char* entity_8;
  memset(entity_0, 'B', 96-1);
  entity_0[96-1]='0';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[0]='0';
  entity_2 = 83;
  strcpy(entity_8, entity_0);
}
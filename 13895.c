void fun()
{
  int entity_4 = 63;
  char* entity_0;
  char entity_5[63] = "";
  memset(entity_5, 'E', 63-1);
  entity_5[63-1]='0';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[0]='0';
  entity_4 = 2;
  strcpy(entity_0, entity_5);
}
void fun()
{
  int entity_0 = 72;
  char entity_5[96] = "";
  char* entity_3;
  char entity_2[33] = "";
  memset(entity_5, 'L', 96-1);
  entity_5[96-1]='0';
  memset(entity_2, 'L', 33-1);
  entity_2[33-1]='0';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_5);
}
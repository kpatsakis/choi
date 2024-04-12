void fun()
{
  int entity_2 = 54;
  entity_2 = 20;
  char entity_5[32] = "";
  char* entity_0;
  memset(entity_5, 'V', 32-1);
  entity_5[32-1]='0';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_5);
}
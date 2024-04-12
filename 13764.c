void fun()
{
  int entity_6 = 63;
  entity_6 = 4;
  char entity_1[49] = "";
  char* entity_0;
  memset(entity_1, 'u', 49-1);
  entity_1[49-1]='0';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_1);
}
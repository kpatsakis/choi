void fun()
{
  int entity_0 = 77;
  entity_0 = 75;
  char* entity_5;
  char entity_1[30] = "";
  memset(entity_1, 'V', 30-1);
  entity_1[30-1]='0';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_1, 30*sizeof(char));
}
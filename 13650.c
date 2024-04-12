void fun()
{
  int entity_1 = 91;
  int entity_8 = 55;
  char entity_4[72] = "";
  char entity_2 = 'y';
  char* entity_0;
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'K', 72-1);
  entity_4[72-1]='0';
  entity_1 = 14;
  memcpy(entity_0, entity_4, 72*sizeof(char));
}
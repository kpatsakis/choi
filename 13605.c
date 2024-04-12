void fun()
{
  int entity_0 = 30;
  entity_0 = 1;
  char entity_8[5] = "";
  char* entity_4;
  memset(entity_8, 'B', 5-1);
  entity_8[5-1]='0';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_8, 5*sizeof(char));
}
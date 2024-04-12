void fun()
{
  int entity_2 = 52;
  char* entity_0;
  char entity_4[64] = "";
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'g', 64-1);
  entity_4[64-1]='0';
  memcpy(entity_0, entity_4, 64*sizeof(char));
}
void fun()
{
  int entity_4 = 64;
  entity_4 = 32;
  char* entity_0;
  char entity_8[85] = "";
  memset(entity_8, 'a', 85-1);
  entity_8[85-1]='0';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_8, 85*sizeof(char));
}
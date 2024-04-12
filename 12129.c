void fun()
{
  int entity_2 = 32;
  char entity_7[32] = "";
  char* entity_0;
  char entity_8[entity_2] = "";
  memset(entity_7, 'z', 32-1);
  entity_7[32-1]='0';
  entity_0 = (char*)malloc(96*sizeof(char));
  entity_0[0]='0';
  memset(entity_8, 'J', entity_2-1);
  entity_8[entity_2-1]='0';
  memcpy(entity_0, entity_8, entity_2*sizeof(char));
}
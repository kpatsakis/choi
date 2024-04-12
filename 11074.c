void fun()
{
  int entity_1 = 74;
  char entity_6[28] = "";
  char* entity_0;
  char entity_8[85] = "";
  char entity_5 = 'l';
  memset(entity_8, 'N', 85-1);
  entity_8[85-1]='0';
  entity_0 = (char*)malloc(85*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'e', 28-1);
  entity_6[28-1]='0';
  memcpy(entity_0, entity_6, 28*sizeof(char));
}
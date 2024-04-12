void fun()
{
  int entity_7 = 40;
  char entity_0[28] = "";
  char* entity_1;
  memset(entity_0, 'Y', 28-1);
  entity_0[28-1]='0';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_0, 28*sizeof(char));
}
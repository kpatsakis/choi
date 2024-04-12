void fun()
{
  char entity_7[32] = "";
  char* entity_0;
  char entity_1 = 'd';
  char* entity_4;
  entity_0 = (char*)malloc(67*sizeof(char));
  entity_0[0]='0';
  memset(entity_7, 'n', 32-1);
  entity_7[32-1]='0';
  entity_4 = (char*)malloc(70*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_7, 32*sizeof(char));
}
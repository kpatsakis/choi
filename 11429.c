void fun()
{
  int entity_6 = 54;
  char entity_1 = 'b';
  char entity_7[30] = "";
  char* entity_0;
  entity_0 = (char*)malloc(36*sizeof(char));
  entity_0[0]='0';
  memset(entity_7, 'p', 30-1);
  entity_7[30-1]='0';
  memcpy(entity_0, entity_7, 30*sizeof(char));
}
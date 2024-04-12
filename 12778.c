void fun()
{
  int entity_7 = 7;
  char* entity_1;
  char entity_0[65] = "";
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'B', 65-1);
  entity_0[65-1]='0';
  memcpy(entity_1, entity_0, 65*sizeof(char));
}
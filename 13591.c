void fun()
{
  int entity_7 = 67;
  entity_7 = 83;
  char entity_4[54] = "";
  char* entity_0;
  memset(entity_4, 'd', 54-1);
  entity_4[54-1]='0';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_4, 54*sizeof(char));
}
void fun()
{
  int entity_3 = 95;
  char entity_7[54] = "";
  char* entity_8;
  char entity_0 = 'Z';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 't', 54-1);
  entity_7[54-1]='0';
  entity_3 = 91;
  memcpy(entity_8, entity_7, 54*sizeof(char));
}
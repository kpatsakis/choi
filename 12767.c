void fun()
{
  int entity_4 = 31;
  char entity_8[20] = "";
  char* entity_1;
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'N', 20-1);
  entity_8[20-1]='0';
  memcpy(entity_1, entity_8, 20*sizeof(char));
}
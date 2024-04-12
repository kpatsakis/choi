void fun()
{
  int entity_8 = 73;
  char entity_0[5] = "";
  char* entity_2;
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'T', 5-1);
  entity_0[5-1]='0';
  memcpy(entity_2, entity_0, 5*sizeof(char));
}
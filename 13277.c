void fun()
{
  int entity_0 = 93;
  entity_0 = 75;
  char entity_2[4] = "";
  char* entity_4;
  memset(entity_2, 'A', 4-1);
  entity_2[4-1]='0';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_2, 4*sizeof(char));
}
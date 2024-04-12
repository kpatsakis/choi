void fun()
{
  int entity_3 = 61;
  char entity_0[12] = "";
  char* entity_2;
  entity_2 = (char*)malloc(53*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'H', 12-1);
  entity_0[12-1]='0';
  memcpy(entity_2, entity_0, 12*sizeof(char));
}
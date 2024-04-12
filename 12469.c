void fun()
{
  int entity_7 = 60;
  char entity_0[20] = "";
  char entity_2[33] = "";
  char* entity_4;
  memset(entity_2, 'D', 33-1);
  entity_2[33-1]='0';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[0]='0';
  memset(entity_0, 'F', 20-1);
  entity_0[20-1]='0';
  memcpy(entity_4, entity_2, 33*sizeof(char));
}
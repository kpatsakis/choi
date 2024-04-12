void fun()
{
  int entity_6 = 13;
  char* entity_2;
  char entity_0[5] = "";
  char entity_8 = 'A';
  char entity_1 = 'g';
  entity_2 = (char*)malloc(52*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'W', 5-1);
  entity_0[5-1]='0';
  memcpy(entity_2, entity_0, 5*sizeof(char));
}
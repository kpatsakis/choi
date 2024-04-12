void fun()
{
  int entity_8 = 9;
  entity_8 = 43;
  char entity_0[82] = "";
  char entity_4[63] = "";
  char* entity_2;
  memset(entity_4, 'r', 63-1);
  entity_4[63-1]='0';
  memset(entity_0, 'N', 82-1);
  entity_0[82-1]='0';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_4, 63*sizeof(char));
}
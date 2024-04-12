void fun()
{
  int entity_2 = 24;
  char* entity_8;
  char entity_4[11] = "";
  char entity_0[82] = "";
  memset(entity_4, 'v', 11-1);
  entity_4[11-1]='0';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[0]='0';
  memset(entity_0, 'G', 82-1);
  entity_0[82-1]='0';
  entity_2 = 30;
  memcpy(entity_8, entity_4, 11*sizeof(char));
}
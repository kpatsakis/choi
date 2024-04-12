void fun()
{
  int entity_5 = 11;
  char* entity_8;
  char entity_0 = 'S';
  char entity_2[11] = "";
  char entity_6 = 'g';
  entity_8 = (char*)malloc(56*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'L', 11-1);
  entity_2[11-1]='0';
  memcpy(entity_8, entity_2, 11*sizeof(char));
}
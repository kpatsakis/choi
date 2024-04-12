void fun()
{
  int entity_2 = 29;
  char entity_6[15] = "";
  char* entity_3;
  memset(entity_6, 'c', 15-1);
  entity_6[15-1]='0';
  entity_3 = (char*)malloc(38*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_6, 15*sizeof(char));
}
void fun()
{
  int entity_5 = 73;
  char* entity_6;
  char entity_2[2] = "";
  memset(entity_2, 'K', 2-1);
  entity_2[2-1]='0';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_2, 2*sizeof(char));
}
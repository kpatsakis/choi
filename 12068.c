void fun()
{
  int entity_2 = 6;
  char entity_5[53] = "";
  char* entity_6;
  char entity_4 = 'h';
  memset(entity_5, 'N', 53-1);
  entity_5[53-1]='0';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_5, 53*sizeof(char));
}
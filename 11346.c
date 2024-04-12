void fun()
{
  int entity_8 = 75;
  char entity_2[32] = "";
  char entity_7 = 'k';
  char* entity_5;
  entity_5 = (char*)malloc(41*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 'P', 32-1);
  entity_2[32-1]='0';
  memcpy(entity_5, entity_2, 32*sizeof(char));
}
void fun()
{
  int entity_2 = 16;
  entity_2 = 75;
  char entity_5[32] = "";
  char* entity_6;
  memset(entity_5, 'S', 32-1);
  entity_5[32-1]='0';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_5, 32*sizeof(char));
}
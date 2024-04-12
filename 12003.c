void fun()
{
  int entity_2 = 99;
  int entity_0 = 49;
  char entity_5 = 'G';
  char* entity_8;
  char entity_9[40] = "";
  memset(entity_9, 'z', 40-1);
  entity_9[40-1]='0';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_9);
}
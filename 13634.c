void fun()
{
  int entity_2 = 11;
  int entity_8 = 91;
  char entity_9[99] = "";
  char entity_3 = 'y';
  char* entity_4;
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'C', 99-1);
  entity_9[99-1]='0';
  entity_2 = 68;
  strcpy(entity_4, entity_9);
}
void fun()
{
  int entity_9 = 12;
  char* entity_8;
  char entity_4[1] = "";
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'p', 1-1);
  entity_4[1-1]='0';
  strcpy(entity_8, entity_4);
}
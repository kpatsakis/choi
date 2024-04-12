void fun()
{
  int entity_2 = 33;
  char entity_4[37] = "";
  char* entity_9;
  memset(entity_4, 'X', 37-1);
  entity_4[37-1]='0';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_4);
}
void fun()
{
  int entity_3 = 56;
  char entity_9[29] = "";
  char* entity_4;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'c', 29-1);
  entity_9[29-1]='0';
  strcpy(entity_4, entity_9);
}
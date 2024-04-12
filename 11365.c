void fun()
{
  int entity_1 = 33;
  char entity_9[20] = "";
  char* entity_4;
  entity_4 = (char*)malloc(11*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'o', 20-1);
  entity_9[20-1]='0';
  strcpy(entity_4, entity_9);
}
void fun()
{
  int entity_3 = 74;
  int entity_2 = 98;
  char* entity_4;
  char entity_9[99] = "";
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'v', 99-1);
  entity_9[99-1]='0';
  strcpy(entity_4, entity_9);
}
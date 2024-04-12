void fun()
{
  int entity_7 = 80;
  char entity_6 = 'X';
  char* entity_3;
  char entity_9[53] = "";
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'd', 53-1);
  entity_9[53-1]='0';
  strcpy(entity_3, entity_9);
}
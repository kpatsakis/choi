void fun()
{
  int entity_8 = 85;
  int entity_9 = 98;
  char* entity_2;
  char entity_6[83] = "";
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'p', 83-1);
  entity_6[83-1]='0';
  entity_8 = 38;
  strcpy(entity_2, entity_6);
}
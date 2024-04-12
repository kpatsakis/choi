void fun()
{
  int entity_8 = 90;
  entity_8 = 30;
  char* entity_9;
  char entity_4[39] = "";
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[0]='0';
  memset(entity_4, 'w', 39-1);
  entity_4[39-1]='0';
  strcpy(entity_9, entity_4);
}
void fun()
{
  int entity_1 = 39;
  entity_1 = 78;
  char entity_3[49] = "";
  char* entity_9;
  memset(entity_3, 'J', 49-1);
  entity_3[49-1]='0';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_3);
}
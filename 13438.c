void fun()
{
  int entity_3 = 34;
  int entity_8 = 99;
  char entity_9[24] = "";
  char* entity_1;
  memset(entity_9, 'l', 24-1);
  entity_9[24-1]='0';
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[0]='0';
  entity_8 = 70;
  strcpy(entity_1, entity_9);
}
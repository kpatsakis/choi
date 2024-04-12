void fun()
{
  int entity_3 = 54;
  char entity_9[56] = "";
  char* entity_5;
  memset(entity_9, 'E', 56-1);
  entity_9[56-1]='0';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[0]='0';
  entity_3 = 83;
  strcpy(entity_5, entity_9);
}
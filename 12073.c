void fun()
{
  int entity_5 = 82;
  char entity_9[56] = "";
  char* entity_4;
  memset(entity_9, 'C', 56-1);
  entity_9[56-1]='0';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_9);
}
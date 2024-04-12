void fun()
{
  int entity_2 = 6;
  int entity_5 = 65;
  char* entity_0;
  char entity_4[67] = "";
  char entity_9[98] = "";
  memset(entity_4, 'I', 67-1);
  entity_4[67-1]='0';
  memset(entity_9, 'U', 98-1);
  entity_9[98-1]='0';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_9);
}
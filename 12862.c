void fun()
{
  int entity_2 = 23;
  char entity_9[56] = "";
  char* entity_0;
  memset(entity_9, 'B', 56-1);
  entity_9[56-1]='0';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_9);
}
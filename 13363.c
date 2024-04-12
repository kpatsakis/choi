void fun()
{
  int entity_4 = 50;
  int entity_7 = 7;
  char entity_0[98] = "";
  char entity_9 = 'H';
  char* entity_3;
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[0]='0';
  memset(entity_0, 'F', 98-1);
  entity_0[98-1]='0';
  entity_7 = 84;
  strcpy(entity_3, entity_0);
}
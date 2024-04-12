void fun()
{
  int entity_0 = 2;
  char entity_6[98] = "";
  char* entity_1;
  memset(entity_6, 'm', 98-1);
  entity_6[98-1]='0';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_6);
}
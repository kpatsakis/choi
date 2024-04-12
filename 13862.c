void fun()
{
  int entity_0 = 87;
  entity_0 = 67;
  char* entity_1;
  char entity_9[76] = "";
  memset(entity_9, 'N', 76-1);
  entity_9[76-1]='0';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_9);
}
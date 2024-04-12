void fun()
{
  int entity_0 = 6;
  char entity_1 = 'P';
  char entity_9[49] = "";
  char* entity_3;
  memset(entity_9, 'u', 49-1);
  entity_9[49-1]='0';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_9);
}
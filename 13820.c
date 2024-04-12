void fun()
{
  int entity_0 = 17;
  entity_0 = 3;
  char* entity_9;
  char entity_5[64] = "";
  memset(entity_5, 'g', 64-1);
  entity_5[64-1]='0';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_5);
}
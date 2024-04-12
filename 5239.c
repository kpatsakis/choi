void fun()
{
  int entity_2 = 26;
  int entity_1 = 92;
  char* entity_4;
  char entity_9 = 'E';
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  entity_4 = (char*)malloc(99*sizeof(char));
  entity_4[99-1]='';
  memset(entity_0, 'Y', entity_1-1);
  entity_0[entity_1-1]='';
  entity_0[27] = 'x';
}
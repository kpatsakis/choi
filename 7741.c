void fun()
{
  int entity_5 = 79;
  char entity_2 = 'Y';
  char* entity_4;
  char entity_0[21] = "";
  entity_0 = NULL;
  char entity_9 = 'g';
  char entity_8 = 'p';
  memset(entity_0, 'C', 21-1);
  entity_0[21-1]='';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  entity_5 = 7;
  strcpy(entity_4, entity_0);
}
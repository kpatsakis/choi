void fun()
{
  int entity_4 = 82;
  char* entity_6;
  char entity_1 = 'w';
  char entity_9[32] = "";
  entity_9 = NULL;
  char entity_0[82] = "";
  entity_0 = NULL;
  memset(entity_9, 'o', 32-1);
  entity_9[32-1]='';
  memset(entity_0, 'p', 82-1);
  entity_0[82-1]='';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  strcpy(entity_6, entity_9);
}
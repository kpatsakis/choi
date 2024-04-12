void fun()
{
  int entity_6 = 21;
  char* entity_1;
  char entity_5 = 'G';
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  char entity_2[84] = "";
  entity_2 = NULL;
  char entity_0 = 'v';
  memset(entity_7, 'H', entity_6-1);
  entity_7[entity_6-1]='';
  memset(entity_2, 'i', 84-1);
  entity_2[84-1]='';
  entity_1 = (char*)malloc(32*sizeof(char));
  entity_1[32-1]='';
  entity_6 = 95;
  strcpy(entity_1, entity_7);
}
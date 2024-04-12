void fun()
{
  int entity_4 = 6;
  int entity_1 = 88;
  int entity_6 = 11;
  char entity_9[52] = "";
  entity_9 = NULL;
  char entity_0[41] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_9, 'N', 52-1);
  entity_9[52-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_0, 'r', 41-1);
  entity_0[41-1]='';
  strcpy(entity_2, entity_9);
}
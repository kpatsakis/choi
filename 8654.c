void fun()
{
  int entity_2 = 91;
  char entity_4[82] = "";
  entity_4 = NULL;
  char entity_5[21] = "";
  entity_5 = NULL;
  char* entity_9;
  char entity_1[41] = "";
  entity_1 = NULL;
  memset(entity_5, 'p', 21-1);
  entity_5[21-1]='';
  entity_9 = (char*)malloc(10*sizeof(char));
  entity_9[10-1]='';
  memset(entity_1, 'K', 41-1);
  entity_1[41-1]='';
  memset(entity_4, 'w', 82-1);
  entity_4[82-1]='';
  entity_1[entity_2] = 't';
}
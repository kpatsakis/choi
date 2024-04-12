void fun()
{
  int entity_9 = 59;
  char* entity_4;
  char entity_2[45] = "";
  entity_2 = NULL;
  char entity_5[52] = "";
  entity_5 = NULL;
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  memset(entity_5, 'N', 52-1);
  entity_5[52-1]='';
  memset(entity_2, 'H', 45-1);
  entity_2[45-1]='';
  entity_9 = 4;
  memcpy(entity_4, entity_5, 52*sizeof(char));
}
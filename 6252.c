void fun()
{
  int entity_0 = 43;
  int entity_1 = 50;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char* entity_5;
  char* entity_9;
  memset(entity_4, 'r', entity_0-1);
  entity_4[entity_0-1]='';
  entity_9 = (char*)malloc(52*sizeof(char));
  entity_9[52-1]='';
  entity_5 = (char*)malloc(77*sizeof(char));
  entity_5[77-1]='';
  strcpy(entity_5, entity_4);
}
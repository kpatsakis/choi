void fun()
{
  int entity_3 = 39;
  int entity_1 = 32;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(52*sizeof(char));
  entity_7[52-1]='';
  memset(entity_9, 'O', entity_3-1);
  entity_9[entity_3-1]='';
  entity_9[80] = 'K';
}
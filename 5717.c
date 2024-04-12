void fun()
{
  int entity_2 = 93;
  int entity_1 = 5;
  char* entity_6;
  char entity_9[52] = "";
  entity_9 = NULL;
  memset(entity_9, 'e', 52-1);
  entity_9[52-1]='';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  entity_2 = 26;
  memcpy(entity_6, entity_9, 52*sizeof(char));
}
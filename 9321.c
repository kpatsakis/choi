void fun()
{
  int entity_7 = 80;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_1;
  memset(entity_5, 'P', entity_7-1);
  entity_5[entity_7-1]='';
  entity_1 = (char*)malloc(52*sizeof(char));
  entity_1[52-1]='';
  memcpy(entity_1, entity_5, entity_7*sizeof(char));
}
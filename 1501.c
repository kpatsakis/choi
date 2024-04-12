void fun()
{
  int entity_3 = 70;
  entity_3 = 32;
  char* entity_2;
  char entity_9[60] = "";
  entity_9 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  entity_2 = (char*)malloc(52*sizeof(char));
  entity_2[52-1]='';
  memset(entity_9, 'j', 60-1);
  entity_9[60-1]='';
  strcpy(entity_4, entity_9);
}
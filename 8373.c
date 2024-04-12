void fun()
{
  int entity_6 = 62;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  char entity_2 = 'A';
  char* entity_4;
  char* entity_8;
  entity_8 = (char*)malloc(52*sizeof(char));
  entity_8[52-1]='';
  memset(entity_9, 'k', entity_6-1);
  entity_9[entity_6-1]='';
  entity_4 = (char*)malloc(41*sizeof(char));
  entity_4[41-1]='';
  entity_6 = 62;
  strcpy(entity_4, entity_9);
}
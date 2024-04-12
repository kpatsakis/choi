void fun()
{
  int entity_5 = 43;
  char* entity_2;
  char entity_6 = 'D';
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  memset(entity_1, 'B', entity_5-1);
  entity_1[entity_5-1]='';
  entity_2 = (char*)malloc(52*sizeof(char));
  entity_2[52-1]='';
  strcpy(entity_2, entity_1);
}
void fun()
{
  int entity_5 = 48;
  char* entity_7;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  entity_7 = (char*)malloc(58*sizeof(char));
  entity_7[58-1]='';
  memset(entity_9, 'X', entity_5-1);
  entity_9[entity_5-1]='';
  entity_5 = 100;
  entity_9[53] = 'Q';
}
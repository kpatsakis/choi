void fun()
{
  int entity_0 = 16;
  int entity_5 = 25;
  char entity_6[68] = "";
  entity_6 = NULL;
  char entity_3 = 'Q';
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  memset(entity_6, 'S', 68-1);
  entity_6[68-1]='';
  memset(entity_9, 'f', entity_5-1);
  entity_9[entity_5-1]='';
  entity_5 = 43;
  entity_9[89] = 'h';
}
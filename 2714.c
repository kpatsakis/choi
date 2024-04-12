void fun()
{
  int entity_2 = 80;
  int entity_5 = 72;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(25*sizeof(char));
  entity_9[25-1]='';
  memset(entity_0, 'e', entity_2-1);
  entity_0[entity_2-1]='';
  entity_0[25] = 'Q';
}
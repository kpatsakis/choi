void fun()
{
  int entity_0 = 71;
  entity_0 = 90;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  char entity_7[40] = "";
  entity_7 = NULL;
  char* entity_1;
  memset(entity_9, 'S', entity_0-1);
  entity_9[entity_0-1]='';
  entity_1 = (char*)malloc(16*sizeof(char));
  entity_1[16-1]='';
  memset(entity_7, 'Q', 40-1);
  entity_7[40-1]='';
  entity_9[88] = 's';
}
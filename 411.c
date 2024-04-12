void fun()
{
  int entity_0 = 99;
  entity_0 = 10;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  char* entity_1;
  char entity_9 = 'Q';
  memset(entity_7, 'p', entity_0-1);
  entity_7[entity_0-1]='';
  entity_1 = (char*)malloc(69*sizeof(char));
  entity_1[69-1]='';
  memcpy(entity_1, entity_7, entity_0*sizeof(char));
}
void fun()
{
  int entity_5 = 51;
  char* entity_7;
  char entity_9[22] = "";
  entity_9 = NULL;
  memset(entity_9, 'V', 22-1);
  entity_9[22-1]='';
  entity_7 = (char*)malloc(59*sizeof(char));
  entity_7[59-1]='';
  entity_9[entity_5] = 'Q';
}
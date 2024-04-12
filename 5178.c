void fun()
{
  int entity_1 = 54;
  char* entity_9;
  char entity_7[81] = "";
  entity_7 = NULL;
  memset(entity_7, 'l', 81-1);
  entity_7[81-1]='';
  entity_9 = (char*)malloc(38*sizeof(char));
  entity_9[38-1]='';
  entity_7[entity_1] = 'j';
}
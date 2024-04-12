void fun()
{
  int entity_9 = 30;
  char entity_1[7] = "";
  entity_1 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(5*sizeof(char));
  entity_7[5-1]='';
  memset(entity_1, 'K', 7-1);
  entity_1[7-1]='';
  entity_1[entity_9] = 'H';
}
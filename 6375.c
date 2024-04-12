void fun()
{
  int entity_4 = 55;
  char* entity_3;
  char entity_9[14] = "";
  entity_9 = NULL;
  entity_3 = (char*)malloc(58*sizeof(char));
  entity_3[58-1]='';
  memset(entity_9, 'f', 14-1);
  entity_9[14-1]='';
  entity_9[entity_4] = 'H';
}
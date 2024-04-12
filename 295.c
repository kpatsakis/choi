void fun()
{
  int entity_3 = 60;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char* entity_0;
  memset(entity_9, 'C', entity_3-1);
  entity_9[entity_3-1]='';
  entity_0 = (char*)malloc(24*sizeof(char));
  entity_0[24-1]='';
  entity_9[18] = 'w';
}
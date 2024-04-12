void fun()
{
  int entity_2 = 73;
  char* entity_6;
  char entity_9[10] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(67*sizeof(char));
  entity_6[67-1]='';
  memset(entity_9, 'h', 10-1);
  entity_9[10-1]='';
  entity_9[entity_2] = 't';
}
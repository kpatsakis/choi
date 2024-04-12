void fun()
{
  int entity_3 = 68;
  int entity_2 = 9;
  char entity_9[33] = "";
  entity_9 = NULL;
  char* entity_4;
  memset(entity_9, 't', 33-1);
  entity_9[33-1]='';
  entity_4 = (char*)malloc(27*sizeof(char));
  entity_4[27-1]='';
  entity_9[entity_3] = 'C';
}
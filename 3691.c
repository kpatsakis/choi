void fun()
{
  int entity_0 = 16;
  int entity_4 = 11;
  char* entity_3;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  memset(entity_9, 'a', entity_0-1);
  entity_9[entity_0-1]='';
  entity_3 = (char*)malloc(19*sizeof(char));
  entity_3[19-1]='';
  entity_9[49] = 'A';
}
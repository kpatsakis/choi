void fun()
{
  int entity_4 = 3;
  int entity_2 = 37;
  entity_4 = 11;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_8;
  memset(entity_9, 'B', entity_4-1);
  entity_9[entity_4-1]='';
  entity_8 = (char*)malloc(81*sizeof(char));
  entity_8[81-1]='';
  entity_9[58] = 'l';
}
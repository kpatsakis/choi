void fun()
{
  int entity_5 = 90;
  char* entity_8;
  char entity_9[26] = "";
  entity_9 = NULL;
  memset(entity_9, 'U', 26-1);
  entity_9[26-1]='';
  entity_8 = (char*)malloc(9*sizeof(char));
  entity_8[9-1]='';
  entity_5 = 52;
  entity_9[entity_5] = 'v';
}
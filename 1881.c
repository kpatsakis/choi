void fun()
{
  int entity_7 = 82;
  char* entity_9;
  char entity_6[55] = "";
  entity_6 = NULL;
  entity_9 = (char*)malloc(32*sizeof(char));
  entity_9[32-1]='';
  memset(entity_6, 'f', 55-1);
  entity_6[55-1]='';
  entity_6[entity_7] = 'z';
}
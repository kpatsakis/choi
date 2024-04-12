void fun()
{
  int entity_0 = 82;
  char* entity_9;
  char entity_6[34] = "";
  entity_6 = NULL;
  memset(entity_6, 'B', 34-1);
  entity_6[34-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memcpy(entity_9, entity_6, 34*sizeof(char));
}
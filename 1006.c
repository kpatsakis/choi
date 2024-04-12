void fun()
{
  int entity_8 = 71;
  char entity_3[17] = "";
  entity_3 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memset(entity_3, 'G', 17-1);
  entity_3[17-1]='';
  entity_8 = 22;
  memcpy(entity_9, entity_3, 17*sizeof(char));
}
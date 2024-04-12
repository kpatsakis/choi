void fun()
{
  int entity_0 = 74;
  entity_0 = 24;
  char entity_7[45] = "";
  entity_7 = NULL;
  char* entity_4;
  memset(entity_7, 'c', 45-1);
  entity_7[45-1]='';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  memcpy(entity_4, entity_7, 45*sizeof(char));
}
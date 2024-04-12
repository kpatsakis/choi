void fun()
{
  int entity_6 = 57;
  entity_6 = 40;
  char* entity_9;
  char entity_0[65] = "";
  entity_0 = NULL;
  memset(entity_0, 'v', 65-1);
  entity_0[65-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memcpy(entity_9, entity_0, 65*sizeof(char));
}
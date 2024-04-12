void fun()
{
  int entity_6 = 28;
  char* entity_9;
  char entity_5 = 's';
  char entity_0[85] = "";
  entity_0 = NULL;
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memset(entity_0, 'B', 85-1);
  entity_0[85-1]='';
  entity_6 = 40;
  memcpy(entity_9, entity_0, 85*sizeof(char));
}
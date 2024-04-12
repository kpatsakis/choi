void fun()
{
  int entity_9 = 81;
  char* entity_5;
  char entity_6[31] = "";
  entity_6 = NULL;
  memset(entity_6, 'X', 31-1);
  entity_6[31-1]='';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memcpy(entity_5, entity_6, 31*sizeof(char));
}
void fun()
{
  int entity_7 = 68;
  char entity_9[97] = "";
  entity_9 = NULL;
  char* entity_5;
  memset(entity_9, 'l', 97-1);
  entity_9[97-1]='';
  entity_5 = (char*)malloc(69*sizeof(char));
  entity_5[69-1]='';
  entity_9[entity_7] = 'K';
}
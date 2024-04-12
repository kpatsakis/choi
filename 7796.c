void fun()
{
  int entity_9 = 24;
  char entity_3[32] = "";
  entity_3 = NULL;
  char* entity_2;
  memset(entity_3, 'Q', 32-1);
  entity_3[32-1]='';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  entity_9 = 48;
  strcpy(entity_2, entity_3);
}
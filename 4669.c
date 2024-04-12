void fun()
{
  int entity_9 = 48;
  char* entity_8;
  char entity_5 = 'd';
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char entity_2[25] = "";
  entity_2 = NULL;
  memset(entity_6, 'c', entity_9-1);
  entity_6[entity_9-1]='';
  memset(entity_2, 'k', 25-1);
  entity_2[25-1]='';
  entity_8 = (char*)malloc(74*sizeof(char));
  entity_8[74-1]='';
  entity_9 = 53;
  memcpy(entity_8, entity_6, entity_9*sizeof(char));
}
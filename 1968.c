void fun()
{
  int entity_9 = 63;
  int entity_1 = 83;
  char entity_6 = 'Z';
  char entity_8[31] = "";
  entity_8 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memset(entity_8, 't', 31-1);
  entity_8[31-1]='';
  entity_9 = 15;
  strcpy(entity_5, entity_8);
}
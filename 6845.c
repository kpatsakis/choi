void fun()
{
  int entity_9 = 72;
  char* entity_2;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(18*sizeof(char));
  entity_8[18-1]='';
  entity_2 = (char*)malloc(43*sizeof(char));
  entity_2[43-1]='';
  memset(entity_0, 'k', entity_9-1);
  entity_0[entity_9-1]='';
  entity_9 = 100;
  strcpy(entity_2, entity_0);
}
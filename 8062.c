void fun()
{
  int entity_8 = 68;
  char* entity_2;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(91*sizeof(char));
  entity_0[91-1]='';
  entity_2 = (char*)malloc(62*sizeof(char));
  entity_2[62-1]='';
  memset(entity_9, 'e', entity_8-1);
  entity_9[entity_8-1]='';
  strcpy(entity_2, entity_9);
}
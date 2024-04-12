void fun()
{
  int entity_3 = 48;
  int entity_6 = 4;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(64*sizeof(char));
  entity_2[64-1]='';
  memset(entity_9, 's', entity_3-1);
  entity_9[entity_3-1]='';
  strcpy(entity_2, entity_9);
}
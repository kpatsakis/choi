void fun()
{
  int entity_6 = 64;
  char* entity_1;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  char entity_9 = 'G';
  entity_1 = (char*)malloc(93*sizeof(char));
  entity_1[93-1]='';
  memset(entity_3, 'z', entity_6-1);
  entity_3[entity_6-1]='';
  strcpy(entity_1, entity_3);
}
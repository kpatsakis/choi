void fun()
{
  int entity_9 = 33;
  char* entity_4;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(84*sizeof(char));
  entity_4[84-1]='';
  memset(entity_3, 'i', entity_9-1);
  entity_3[entity_9-1]='';
  entity_9 = 8;
  strcpy(entity_4, entity_3);
}
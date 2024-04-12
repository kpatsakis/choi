void fun()
{
  int entity_9 = 35;
  entity_9 = 35;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(84*sizeof(char));
  entity_3[84-1]='';
  memset(entity_2, 'h', entity_9-1);
  entity_2[entity_9-1]='';
  strcpy(entity_3, entity_2);
}
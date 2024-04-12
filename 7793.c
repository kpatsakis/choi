void fun()
{
  int entity_0 = 27;
  int entity_9 = 40;
  entity_9 = 40;
  char* entity_1;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(82*sizeof(char));
  entity_3[82-1]='';
  entity_1 = (char*)malloc(7*sizeof(char));
  entity_1[7-1]='';
  memset(entity_5, 'e', entity_9-1);
  entity_5[entity_9-1]='';
  strcpy(entity_1, entity_5);
}
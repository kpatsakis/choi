void fun()
{
  int entity_6 = 15;
  int entity_9 = 81;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char* entity_1;
  char entity_3[90] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(34*sizeof(char));
  entity_1[34-1]='';
  memset(entity_3, 'Y', 90-1);
  entity_3[90-1]='';
  memset(entity_5, 'w', entity_9-1);
  entity_5[entity_9-1]='';
  memcpy(entity_1, entity_5, entity_9*sizeof(char));
}
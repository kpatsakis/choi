void fun()
{
  int entity_9 = 5;
  entity_9 = 5;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_6;
  char entity_1[38] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(94*sizeof(char));
  entity_6[94-1]='';
  memset(entity_3, 'i', entity_9-1);
  entity_3[entity_9-1]='';
  memset(entity_1, 'O', 38-1);
  entity_1[38-1]='';
  strcpy(entity_6, entity_3);
}
void fun()
{
  int entity_9 = 65;
  char entity_7[20] = "";
  entity_7 = NULL;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  char* entity_6;
  char* entity_2;
  memset(entity_7, 'N', 20-1);
  entity_7[20-1]='';
  memset(entity_1, 's', entity_9-1);
  entity_1[entity_9-1]='';
  entity_6 = (char*)malloc(67*sizeof(char));
  entity_6[67-1]='';
  entity_2 = (char*)malloc(91*sizeof(char));
  entity_2[91-1]='';
  entity_9 = 82;
  strcpy(entity_6, entity_1);
}
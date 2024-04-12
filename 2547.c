void fun()
{
  int entity_7 = 48;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_9;
  char entity_4 = 'U';
  char* entity_1;
  memset(entity_5, 'o', entity_7-1);
  entity_5[entity_7-1]='';
  entity_1 = (char*)malloc(90*sizeof(char));
  entity_1[90-1]='';
  entity_9 = (char*)malloc(36*sizeof(char));
  entity_9[36-1]='';
  entity_7 = 28;
  strcpy(entity_1, entity_5);
}
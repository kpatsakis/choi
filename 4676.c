void fun()
{
  int entity_2 = 30;
  char entity_9 = 'J';
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char entity_3[9] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_3, 'A', 9-1);
  entity_3[9-1]='';
  entity_7 = (char*)malloc(91*sizeof(char));
  entity_7[91-1]='';
  memset(entity_5, 'r', entity_2-1);
  entity_5[entity_2-1]='';
  strcpy(entity_7, entity_5);
}
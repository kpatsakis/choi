void fun()
{
  int entity_9 = 18;
  char entity_7[44] = "";
  entity_7 = NULL;
  char entity_4 = 'i';
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char* entity_2;
  memset(entity_5, 'w', entity_9-1);
  entity_5[entity_9-1]='';
  memset(entity_7, 'E', 44-1);
  entity_7[44-1]='';
  entity_2 = (char*)malloc(26*sizeof(char));
  entity_2[26-1]='';
  strcpy(entity_2, entity_5);
}
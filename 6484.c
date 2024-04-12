void fun()
{
  int entity_9 = 59;
  char entity_2[49] = "";
  entity_2 = NULL;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char entity_6[9] = "";
  entity_6 = NULL;
  char* entity_3;
  memset(entity_6, 'v', 9-1);
  entity_6[9-1]='';
  memset(entity_5, 'o', entity_9-1);
  entity_5[entity_9-1]='';
  entity_3 = (char*)malloc(41*sizeof(char));
  entity_3[41-1]='';
  memset(entity_2, 'Q', 49-1);
  entity_2[49-1]='';
  strcpy(entity_3, entity_5);
}
void fun()
{
  int entity_9 = 91;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char* entity_2;
  char* entity_7;
  entity_7 = (char*)malloc(71*sizeof(char));
  entity_7[71-1]='';
  memset(entity_5, 'Y', entity_9-1);
  entity_5[entity_9-1]='';
  entity_2 = (char*)malloc(41*sizeof(char));
  entity_2[41-1]='';
  strcpy(entity_7, entity_5);
}
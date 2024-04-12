void fun()
{
  int entity_0 = 21;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char* entity_7;
  char* entity_1;
  char* entity_9;
  entity_9 = (char*)malloc(18*sizeof(char));
  entity_9[18-1]='';
  entity_7 = (char*)malloc(71*sizeof(char));
  entity_7[71-1]='';
  entity_1 = (char*)malloc(55*sizeof(char));
  entity_1[55-1]='';
  memset(entity_2, 'u', entity_0-1);
  entity_2[entity_0-1]='';
  strcpy(entity_9, entity_2);
}
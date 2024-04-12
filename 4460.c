void fun()
{
  int entity_9 = 85;
  char entity_1[26] = "";
  entity_1 = NULL;
  char entity_7 = 'T';
  char* entity_5;
  char entity_0 = 'z';
  memset(entity_1, 'n', 26-1);
  entity_1[26-1]='';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  strcpy(entity_5, entity_1);
}
void fun()
{
  int entity_4 = 22;
  int entity_9 = 25;
  entity_4 = 22;
  char entity_6 = 'C';
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  char* entity_3;
  char entity_5 = 'n';
  memset(entity_1, 'h', entity_4-1);
  entity_1[entity_4-1]='';
  entity_3 = (char*)malloc(26*sizeof(char));
  entity_3[26-1]='';
  strcpy(entity_3, entity_1);
}
void fun()
{
  int entity_7 = 18;
  int entity_2 = 50;
  char* entity_1;
  char entity_5[58] = "";
  entity_5 = NULL;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  memset(entity_4, 'h', entity_7-1);
  entity_4[entity_7-1]='';
  memset(entity_5, 'A', 58-1);
  entity_5[58-1]='';
  entity_1 = (char*)malloc(54*sizeof(char));
  entity_1[54-1]='';
  memcpy(entity_1, entity_4, entity_7*sizeof(char));
}
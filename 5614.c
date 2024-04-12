void fun()
{
  int entity_3 = 39;
  char* entity_7;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char* entity_5;
  char entity_4 = 'V';
  memset(entity_1, 'A', entity_3-1);
  entity_1[entity_3-1]='';
  entity_7 = (char*)malloc(67*sizeof(char));
  entity_7[67-1]='';
  entity_5 = (char*)malloc(9*sizeof(char));
  entity_5[9-1]='';
  entity_3 = 32;
  strcpy(entity_5, entity_1);
}
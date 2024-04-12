void fun()
{
  int entity_7 = 61;
  int entity_8 = 6;
  entity_7 = 58;
  char entity_6 = 'c';
  char* entity_1;
  char entity_4 = 'C';
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[43-1]='';
  memset(entity_5, 'h', entity_7-1);
  entity_5[entity_7-1]='';
  memcpy(entity_1, entity_5, entity_7*sizeof(char));
}
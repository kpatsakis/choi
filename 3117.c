void fun()
{
  int entity_7 = 90;
  char* entity_5;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_1;
  memset(entity_4, 'c', entity_7-1);
  entity_4[entity_7-1]='';
  entity_1 = (char*)malloc(39*sizeof(char));
  entity_1[39-1]='';
  entity_5 = (char*)malloc(51*sizeof(char));
  entity_5[51-1]='';
  entity_7 = 50;
  memcpy(entity_1, entity_4, entity_7*sizeof(char));
}
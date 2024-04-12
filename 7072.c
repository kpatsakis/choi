void fun()
{
  int entity_6 = 72;
  int entity_7 = 75;
  char* entity_1;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char entity_8 = 'O';
  char* entity_4;
  memset(entity_5, 'n', entity_7-1);
  entity_5[entity_7-1]='';
  entity_1 = (char*)malloc(85*sizeof(char));
  entity_1[85-1]='';
  entity_4 = (char*)malloc(98*sizeof(char));
  entity_4[98-1]='';
  memcpy(entity_1, entity_5, entity_7*sizeof(char));
}
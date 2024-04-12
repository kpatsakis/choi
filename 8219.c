void fun()
{
  int entity_5 = 72;
  entity_5 = 23;
  char entity_4[32] = "";
  entity_4 = NULL;
  char entity_9 = 'O';
  char* entity_2;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  entity_2 = (char*)malloc(85*sizeof(char));
  entity_2[85-1]='';
  memset(entity_3, 'f', entity_5-1);
  entity_3[entity_5-1]='';
  memset(entity_4, 'Q', 32-1);
  entity_4[32-1]='';
  memcpy(entity_2, entity_3, entity_5*sizeof(char));
}
void fun()
{
  int entity_2 = 7;
  int entity_9 = 1;
  char entity_5[38] = "";
  entity_5 = NULL;
  char* entity_0;
  char entity_7[18] = "";
  entity_7 = NULL;
  memset(entity_7, 'X', 18-1);
  entity_7[18-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memset(entity_5, 'H', 38-1);
  entity_5[38-1]='';
  memcpy(entity_0, entity_7, 18*sizeof(char));
}
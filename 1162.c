void fun()
{
  int entity_1 = 81;
  entity_1 = 52;
  char* entity_5;
  char entity_8[90] = "";
  entity_8 = NULL;
  char entity_2[57] = "";
  entity_2 = NULL;
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  memset(entity_2, 'K', 57-1);
  entity_2[57-1]='';
  memset(entity_8, 'R', 90-1);
  entity_8[90-1]='';
  memcpy(entity_5, entity_2, 57*sizeof(char));
}
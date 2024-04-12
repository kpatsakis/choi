void fun()
{
  int entity_1 = 14;
  entity_1 = 87;
  char entity_2[6] = "";
  entity_2 = NULL;
  char* entity_5;
  char* entity_7;
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  entity_7 = (char*)malloc(61*sizeof(char));
  entity_7[61-1]='';
  memset(entity_2, 'H', 6-1);
  entity_2[6-1]='';
  memcpy(entity_5, entity_2, 6*sizeof(char));
}
void fun()
{
  int entity_2 = 72;
  entity_2 = 31;
  char entity_1[14] = "";
  entity_1 = NULL;
  char* entity_5;
  char* entity_7;
  entity_5 = (char*)malloc(55*sizeof(char));
  entity_5[55-1]='';
  memset(entity_1, 'f', 14-1);
  entity_1[14-1]='';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  memcpy(entity_7, entity_1, 14*sizeof(char));
}
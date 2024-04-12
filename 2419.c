void fun()
{
  int entity_1 = 73;
  int entity_2 = 25;
  char* entity_5;
  char entity_3[39] = "";
  entity_3 = NULL;
  memset(entity_3, 'r', 39-1);
  entity_3[39-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memcpy(entity_5, entity_3, 39*sizeof(char));
}
void fun()
{
  int entity_2 = 23;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(7*sizeof(char));
  entity_5[7-1]='';
  memset(entity_1, 'y', entity_2-1);
  entity_1[entity_2-1]='';
  entity_2 = 2;
  memcpy(entity_5, entity_1, entity_2*sizeof(char));
}
void fun()
{
  int entity_4 = 50;
  entity_4 = 27;
  char entity_3 = 'R';
  char entity_5[57] = "";
  entity_5 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  memset(entity_5, 's', 57-1);
  entity_5[57-1]='';
  memcpy(entity_9, entity_5, 57*sizeof(char));
}
void fun()
{
  int entity_5 = 67;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(40*sizeof(char));
  entity_7[40-1]='';
  memset(entity_2, 'J', entity_5-1);
  entity_2[entity_5-1]='';
  entity_5 = 84;
  memcpy(entity_7, entity_2, entity_5*sizeof(char));
}
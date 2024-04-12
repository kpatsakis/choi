void fun()
{
  int entity_2 = 18;
  int entity_8 = 66;
  char entity_3 = 'o';
  char* entity_5;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  memset(entity_9, 'E', entity_2-1);
  entity_9[entity_2-1]='';
  entity_5 = (char*)malloc(74*sizeof(char));
  entity_5[74-1]='';
  memcpy(entity_5, entity_9, entity_2*sizeof(char));
}
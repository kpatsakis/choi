void fun()
{
  int entity_3 = 45;
  int entity_9 = 60;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(75*sizeof(char));
  entity_5[75-1]='';
  memset(entity_8, 'q', entity_3-1);
  entity_8[entity_3-1]='';
  entity_3 = 41;
  memcpy(entity_5, entity_8, entity_3*sizeof(char));
}
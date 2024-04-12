void fun()
{
  int entity_2 = 52;
  entity_2 = 6;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char* entity_0;
  char entity_9 = 'F';
  entity_0 = (char*)malloc(45*sizeof(char));
  entity_0[45-1]='';
  memset(entity_5, 'K', entity_2-1);
  entity_5[entity_2-1]='';
  memcpy(entity_0, entity_5, entity_2*sizeof(char));
}
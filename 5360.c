void fun()
{
  int entity_2 = 50;
  entity_2 = 41;
  char* entity_5;
  char entity_9[66] = "";
  entity_9 = NULL;
  memset(entity_9, 'v', 66-1);
  entity_9[66-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memcpy(entity_5, entity_9, 66*sizeof(char));
}
void fun()
{
  int entity_9 = 39;
  char entity_3[66] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_3, 'R', 66-1);
  entity_3[66-1]='';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  entity_9 = 27;
  memcpy(entity_7, entity_3, 66*sizeof(char));
}
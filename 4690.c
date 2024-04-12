void fun()
{
  int entity_1 = 39;
  entity_1 = 46;
  char entity_5[66] = "";
  entity_5 = NULL;
  char* entity_9;
  char entity_4 = 'b';
  memset(entity_5, 'j', 66-1);
  entity_5[66-1]='';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memcpy(entity_9, entity_5, 66*sizeof(char));
}
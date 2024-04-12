void fun()
{
  int entity_6 = 49;
  int entity_9 = 23;
  char entity_5[66] = "";
  entity_5 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  memset(entity_5, 'h', 66-1);
  entity_5[66-1]='';
  entity_6 = 45;
  memcpy(entity_0, entity_5, 66*sizeof(char));
}
void fun()
{
  int entity_7 = 9;
  entity_7 = 94;
  char* entity_0;
  char entity_5[66] = "";
  entity_5 = NULL;
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memset(entity_5, 'Z', 66-1);
  entity_5[66-1]='';
  memcpy(entity_0, entity_5, 66*sizeof(char));
}
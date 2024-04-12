void fun()
{
  int entity_9 = 26;
  char entity_7[66] = "";
  entity_7 = NULL;
  char* entity_4;
  memset(entity_7, 'Z', 66-1);
  entity_7[66-1]='';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  entity_9 = 49;
  memcpy(entity_4, entity_7, 66*sizeof(char));
}
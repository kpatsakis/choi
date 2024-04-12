void fun()
{
  int entity_9 = 77;
  char entity_6[66] = "";
  entity_6 = NULL;
  char* entity_2;
  char entity_5 = 'U';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  memset(entity_6, 'F', 66-1);
  entity_6[66-1]='';
  entity_9 = 44;
  memcpy(entity_2, entity_6, 66*sizeof(char));
}
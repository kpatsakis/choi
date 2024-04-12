void fun()
{
  int entity_8 = 29;
  int entity_6 = 43;
  int entity_2 = 77;
  entity_8 = 68;
  char* entity_7;
  char entity_9[66] = "";
  entity_9 = NULL;
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memset(entity_9, 'N', 66-1);
  entity_9[66-1]='';
  memcpy(entity_7, entity_9, 66*sizeof(char));
}
void fun()
{
  int entity_1 = 80;
  int entity_3 = 89;
  char entity_9[66] = "";
  entity_9 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_9, 'B', 66-1);
  entity_9[66-1]='';
  memcpy(entity_2, entity_9, 66*sizeof(char));
}
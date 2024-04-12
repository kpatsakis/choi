void fun()
{
  int entity_9 = 88;
  int entity_3 = 52;
  char entity_8 = 't';
  char* entity_4;
  char* entity_1;
  char entity_6[66] = "";
  entity_6 = NULL;
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  memset(entity_6, 'p', 66-1);
  entity_6[66-1]='';
  entity_4 = (char*)malloc(47*sizeof(char));
  entity_4[47-1]='';
  memcpy(entity_1, entity_6, 66*sizeof(char));
}
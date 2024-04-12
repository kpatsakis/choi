void fun()
{
  int entity_9 = 89;
  char* entity_2;
  char entity_5 = 'p';
  char entity_1[66] = "";
  entity_1 = NULL;
  char* entity_3;
  memset(entity_1, 'U', 66-1);
  entity_1[66-1]='';
  entity_2 = (char*)malloc(67*sizeof(char));
  entity_2[67-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  strcpy(entity_3, entity_1);
}
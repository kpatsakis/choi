void fun()
{
  int entity_9 = 68;
  char* entity_5;
  char entity_2[13] = "";
  entity_2 = NULL;
  char entity_3 = 'F';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memset(entity_2, 'J', 13-1);
  entity_2[13-1]='';
  entity_9 = 51;
  memcpy(entity_5, entity_2, 13*sizeof(char));
}
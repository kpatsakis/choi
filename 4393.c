void fun()
{
  int entity_9 = 66;
  char* entity_4;
  char entity_3[7] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  memset(entity_3, 'O', 7-1);
  entity_3[7-1]='';
  entity_9 = 4;
  memcpy(entity_4, entity_3, 7*sizeof(char));
}
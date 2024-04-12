void fun()
{
  int entity_9 = 70;
  entity_9 = 81;
  char entity_1[14] = "";
  entity_1 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_1, 's', 14-1);
  entity_1[14-1]='';
  memcpy(entity_6, entity_1, 14*sizeof(char));
}
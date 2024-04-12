void fun()
{
  int entity_9 = 80;
  int entity_2 = 20;
  char entity_8 = 'q';
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char* entity_0;
  char* entity_7;
  entity_7 = (char*)malloc(17*sizeof(char));
  entity_7[17-1]='';
  entity_0 = (char*)malloc(71*sizeof(char));
  entity_0[71-1]='';
  memset(entity_6, 'n', entity_9-1);
  entity_6[entity_9-1]='';
  entity_9 = 90;
  memcpy(entity_7, entity_6, entity_9*sizeof(char));
}
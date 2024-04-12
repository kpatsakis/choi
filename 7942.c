void fun()
{
  int entity_9 = 59;
  char entity_6[63] = "";
  entity_6 = NULL;
  char* entity_5;
  char* entity_0;
  memset(entity_6, 'a', 63-1);
  entity_6[63-1]='';
  entity_5 = (char*)malloc(71*sizeof(char));
  entity_5[71-1]='';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  memcpy(entity_0, entity_6, 63*sizeof(char));
}
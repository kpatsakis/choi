void fun()
{
  int entity_9 = 59;
  entity_9 = 68;
  char entity_1 = 'F';
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  char* entity_5;
  char* entity_8;
  memset(entity_7, 't', entity_9-1);
  entity_7[entity_9-1]='';
  entity_8 = (char*)malloc(48*sizeof(char));
  entity_8[48-1]='';
  entity_5 = (char*)malloc(75*sizeof(char));
  entity_5[75-1]='';
  memcpy(entity_5, entity_7, entity_9*sizeof(char));
}
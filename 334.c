void fun()
{
  int entity_2 = 86;
  int entity_9 = 100;
  entity_9 = 59;
  char entity_3 = 'l';
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(31*sizeof(char));
  entity_7[31-1]='';
  memset(entity_8, 'k', entity_9-1);
  entity_8[entity_9-1]='';
  memcpy(entity_7, entity_8, entity_9*sizeof(char));
}
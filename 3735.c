void fun()
{
  int entity_9 = 92;
  char* entity_6;
  char entity_5[62] = "";
  entity_5 = NULL;
  char* entity_7;
  entity_6 = (char*)malloc(63*sizeof(char));
  entity_6[63-1]='';
  memset(entity_5, 'C', 62-1);
  entity_5[62-1]='';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  entity_9 = 8;
  strcpy(entity_7, entity_5);
}
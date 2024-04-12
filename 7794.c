void fun()
{
  int entity_0 = 42;
  int entity_9 = 59;
  entity_9 = 79;
  char entity_3[62] = "";
  entity_3 = NULL;
  char entity_7[13] = "";
  entity_7 = NULL;
  char* entity_8;
  memset(entity_7, 'Y', 13-1);
  entity_7[13-1]='';
  memset(entity_3, 'm', 62-1);
  entity_3[62-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  strcpy(entity_8, entity_3);
}
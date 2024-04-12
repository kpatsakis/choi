void fun()
{
  int entity_9 = 88;
  int entity_0 = 68;
  int entity_4 = 84;
  entity_0 = 68;
  char entity_2[79] = "";
  entity_2 = NULL;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(16*sizeof(char));
  entity_7[16-1]='';
  memset(entity_2, 'y', 79-1);
  entity_2[79-1]='';
  memset(entity_6, 'Z', entity_0-1);
  entity_6[entity_0-1]='';
  strcpy(entity_7, entity_6);
}
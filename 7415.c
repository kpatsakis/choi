void fun()
{
  int entity_7 = 83;
  entity_7 = 84;
  char* entity_9;
  char entity_0[30] = "";
  entity_0 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  entity_9 = (char*)malloc(76*sizeof(char));
  entity_9[76-1]='';
  memset(entity_0, 'Y', 30-1);
  entity_0[30-1]='';
  memcpy(entity_1, entity_0, 30*sizeof(char));
}
void fun()
{
  int entity_2 = 5;
  int entity_9 = 79;
  char entity_1[83] = "";
  entity_1 = NULL;
  char entity_0[65] = "";
  entity_0 = NULL;
  char* entity_3;
  char entity_7[76] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_7, 'S', 76-1);
  entity_7[76-1]='';
  memset(entity_1, 'J', 83-1);
  entity_1[83-1]='';
  memset(entity_0, 'k', 65-1);
  entity_0[65-1]='';
  memcpy(entity_3, entity_7, 76*sizeof(char));
}
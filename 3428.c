void fun()
{
  int entity_9 = 74;
  char entity_7[46] = "";
  entity_7 = NULL;
  char entity_5[99] = "";
  entity_5 = NULL;
  char entity_8 = 'O';
  char entity_0[93] = "";
  entity_0 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  memset(entity_7, 'r', 46-1);
  entity_7[46-1]='';
  memset(entity_5, 'c', 99-1);
  entity_5[99-1]='';
  memset(entity_0, 'h', 93-1);
  entity_0[93-1]='';
  memcpy(entity_4, entity_0, 93*sizeof(char));
}
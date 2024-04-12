void fun()
{
  int entity_9 = 19;
  int entity_2 = 9;
  char entity_0[61] = "";
  entity_0 = NULL;
  char* entity_6;
  char* entity_5;
  char entity_1 = 'n';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_0, 'A', 61-1);
  entity_0[61-1]='';
  entity_5 = (char*)malloc(47*sizeof(char));
  entity_5[47-1]='';
  memcpy(entity_6, entity_0, 61*sizeof(char));
}
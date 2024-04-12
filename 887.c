void fun()
{
  int entity_9 = 80;
  int entity_7 = 53;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_2;
  char* entity_4;
  entity_2 = (char*)malloc(28*sizeof(char));
  entity_2[28-1]='';
  entity_4 = (char*)malloc(33*sizeof(char));
  entity_4[33-1]='';
  memset(entity_0, 'Q', entity_9-1);
  entity_0[entity_9-1]='';
  entity_0[97] = 'g';
}
void fun()
{
  int entity_7 = 77;
  char* entity_5;
  char* entity_9;
  char entity_3 = 'v';
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  entity_9 = (char*)malloc(96*sizeof(char));
  entity_9[96-1]='';
  entity_5 = (char*)malloc(92*sizeof(char));
  entity_5[92-1]='';
  memset(entity_0, 'W', entity_7-1);
  entity_0[entity_7-1]='';
  entity_7 = 47;
  strcpy(entity_5, entity_0);
}
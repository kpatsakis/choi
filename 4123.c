void fun()
{
  int entity_9 = 91;
  char* entity_7;
  char* entity_5;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  memset(entity_0, 'E', entity_9-1);
  entity_0[entity_9-1]='';
  entity_5 = (char*)malloc(16*sizeof(char));
  entity_5[16-1]='';
  entity_7 = (char*)malloc(85*sizeof(char));
  entity_7[85-1]='';
  entity_0[80] = 'Y';
}
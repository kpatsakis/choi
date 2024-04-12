void fun()
{
  int entity_9 = 95;
  char* entity_8;
  char entity_0 = 'h';
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  memset(entity_4, 'A', entity_9-1);
  entity_4[entity_9-1]='';
  entity_8 = (char*)malloc(36*sizeof(char));
  entity_8[36-1]='';
  entity_4[44] = 'R';
}
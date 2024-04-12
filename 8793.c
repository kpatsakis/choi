void fun()
{
  int entity_9 = 2;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_1;
  memset(entity_8, 'w', entity_9-1);
  entity_8[entity_9-1]='';
  entity_1 = (char*)malloc(3*sizeof(char));
  entity_1[3-1]='';
  entity_8[83] = 'a';
}
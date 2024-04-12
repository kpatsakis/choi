void fun()
{
  int entity_2 = 83;
  entity_2 = 35;
  char* entity_1;
  char entity_0[43] = "";
  entity_0 = NULL;
  memset(entity_0, 'b', 43-1);
  entity_0[43-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  strcpy(entity_1, entity_0);
}
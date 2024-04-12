void fun()
{
  int entity_5 = 87;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(64*sizeof(char));
  entity_2[64-1]='';
  memset(entity_1, 's', entity_5-1);
  entity_1[entity_5-1]='';
  entity_5 = 29;
  entity_1[48] = 'R';
}
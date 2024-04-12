void fun()
{
  int entity_4 = 55;
  int entity_7 = 28;
  int entity_1 = 19;
  char entity_5 = 'D';
  char* entity_0;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  entity_0 = (char*)malloc(76*sizeof(char));
  entity_0[76-1]='';
  memset(entity_2, 'p', entity_7-1);
  entity_2[entity_7-1]='';
  memcpy(entity_0, entity_2, entity_7*sizeof(char));
}
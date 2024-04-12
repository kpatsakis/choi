void fun()
{
  int entity_7 = 38;
  int entity_6 = 3;
  char entity_2[56] = "";
  entity_2 = NULL;
  char entity_5 = 'h';
  char* entity_0;
  memset(entity_2, 'B', 56-1);
  entity_2[56-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memcpy(entity_0, entity_2, 56*sizeof(char));
}
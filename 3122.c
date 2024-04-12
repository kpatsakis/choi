void fun()
{
  int entity_8 = 91;
  char* entity_6;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  memset(entity_2, 'X', entity_8-1);
  entity_2[entity_8-1]='';
  entity_6 = (char*)malloc(56*sizeof(char));
  entity_6[56-1]='';
  memcpy(entity_6, entity_2, entity_8*sizeof(char));
}
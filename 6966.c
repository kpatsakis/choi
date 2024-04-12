void fun()
{
  int entity_4 = 47;
  int entity_7 = 74;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char entity_6 = 'B';
  char* entity_1;
  memset(entity_0, 'e', entity_7-1);
  entity_0[entity_7-1]='';
  entity_1 = (char*)malloc(19*sizeof(char));
  entity_1[19-1]='';
  memcpy(entity_1, entity_0, entity_7*sizeof(char));
}
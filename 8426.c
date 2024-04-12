void fun()
{
  int entity_4 = 15;
  entity_4 = 60;
  char* entity_0;
  char entity_2[36] = "";
  entity_2 = NULL;
  char entity_6[34] = "";
  entity_6 = NULL;
  char entity_9 = 'a';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  memset(entity_2, 'N', 36-1);
  entity_2[36-1]='';
  memset(entity_6, 'E', 34-1);
  entity_6[34-1]='';
  memcpy(entity_0, entity_2, 36*sizeof(char));
}
void fun()
{
  int entity_2 = 27;
  char* entity_4;
  char entity_6 = 'j';
  char* entity_3;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char entity_9 = 'a';
  entity_3 = (char*)malloc(11*sizeof(char));
  entity_3[11-1]='';
  memset(entity_0, 'U', entity_2-1);
  entity_0[entity_2-1]='';
  entity_4 = (char*)malloc(76*sizeof(char));
  entity_4[76-1]='';
  memcpy(entity_4, entity_0, entity_2*sizeof(char));
}
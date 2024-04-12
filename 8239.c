void fun()
{
  int entity_0 = 73;
  char* entity_5;
  char* entity_3;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(1*sizeof(char));
  entity_5[1-1]='';
  memset(entity_4, 'L', entity_0-1);
  entity_4[entity_0-1]='';
  entity_3 = (char*)malloc(14*sizeof(char));
  entity_3[14-1]='';
  memcpy(entity_5, entity_4, entity_0*sizeof(char));
}
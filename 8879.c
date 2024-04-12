void fun()
{
  int entity_1 = 21;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char* entity_0;
  char* entity_2;
  entity_0 = (char*)malloc(38*sizeof(char));
  entity_0[38-1]='';
  entity_2 = (char*)malloc(10*sizeof(char));
  entity_2[10-1]='';
  memset(entity_3, 'H', entity_1-1);
  entity_3[entity_1-1]='';
  memcpy(entity_2, entity_3, entity_1*sizeof(char));
}
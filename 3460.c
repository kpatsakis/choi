void fun()
{
  int entity_3 = 73;
  int entity_0 = 1;
  entity_0 = 87;
  char* entity_5;
  char* entity_9;
  char entity_4[10] = "";
  entity_4 = NULL;
  entity_9 = (char*)malloc(25*sizeof(char));
  entity_9[25-1]='';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memset(entity_4, 'G', 10-1);
  entity_4[10-1]='';
  memcpy(entity_5, entity_4, 10*sizeof(char));
}
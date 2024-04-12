void fun()
{
  int entity_2 = 14;
  entity_2 = 50;
  char* entity_9;
  char entity_4[85] = "";
  entity_4 = NULL;
  char entity_7[30] = "";
  entity_7 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(15*sizeof(char));
  entity_0[15-1]='';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  memset(entity_4, 'u', 85-1);
  entity_4[85-1]='';
  memset(entity_7, 'w', 30-1);
  entity_7[30-1]='';
  memcpy(entity_9, entity_4, 85*sizeof(char));
}
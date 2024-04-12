void fun()
{
  int entity_6 = 47;
  int entity_9 = 49;
  entity_6 = 73;
  char* entity_2;
  char entity_7 = 'K';
  char entity_0[85] = "";
  entity_0 = NULL;
  char entity_5[93] = "";
  entity_5 = NULL;
  memset(entity_0, 'd', 85-1);
  entity_0[85-1]='';
  memset(entity_5, 'a', 93-1);
  entity_5[93-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  memcpy(entity_2, entity_0, 85*sizeof(char));
}
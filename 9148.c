void fun()
{
  int entity_4 = 86;
  int entity_8 = 88;
  char entity_9[21] = "";
  entity_9 = NULL;
  char entity_5 = 'D';
  char entity_3[96] = "";
  entity_3 = NULL;
  char* entity_2;
  memset(entity_3, 'K', 96-1);
  entity_3[96-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_9, 'A', 21-1);
  entity_9[21-1]='';
  memcpy(entity_2, entity_3, 96*sizeof(char));
}
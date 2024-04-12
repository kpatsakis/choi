void fun()
{
  int entity_2 = 84;
  char entity_0 = 'D';
  char* entity_9;
  char entity_8[96] = "";
  entity_8 = NULL;
  char entity_3[7] = "";
  entity_3 = NULL;
  memset(entity_8, 'i', 96-1);
  entity_8[96-1]='';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  memset(entity_3, 'i', 7-1);
  entity_3[7-1]='';
  memcpy(entity_9, entity_8, 96*sizeof(char));
}
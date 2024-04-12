void fun()
{
  int entity_6 = 53;
  char* entity_9;
  char entity_4 = 'N';
  char entity_3[80] = "";
  entity_3 = NULL;
  char entity_2[64] = "";
  entity_2 = NULL;
  char entity_5 = 'b';
  memset(entity_3, 'z', 80-1);
  entity_3[80-1]='';
  memset(entity_2, 'u', 64-1);
  entity_2[64-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memcpy(entity_9, entity_3, 80*sizeof(char));
}
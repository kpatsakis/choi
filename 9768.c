void fun()
{
  int entity_2 = 90;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char entity_7[63] = "";
  entity_7 = NULL;
  char* entity_6;
  memset(entity_7, 'G', 63-1);
  entity_7[63-1]='';
  entity_6 = (char*)malloc(96*sizeof(char));
  entity_6[96-1]='';
  memset(entity_4, 'c', entity_2-1);
  entity_4[entity_2-1]='';
  memcpy(entity_6, entity_4, entity_2*sizeof(char));
}
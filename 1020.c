void fun()
{
  int entity_6 = 94;
  int entity_4 = 18;
  char entity_3[6] = "";
  entity_3 = NULL;
  char* entity_5;
  char entity_7[77] = "";
  entity_7 = NULL;
  memset(entity_3, 'I', 6-1);
  entity_3[6-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memset(entity_7, 'c', 77-1);
  entity_7[77-1]='';
  memcpy(entity_5, entity_3, 6*sizeof(char));
}
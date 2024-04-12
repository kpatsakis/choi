void fun()
{
  int entity_6 = 53;
  char entity_3[77] = "";
  entity_3 = NULL;
  char* entity_2;
  char entity_1[57] = "";
  entity_1 = NULL;
  memset(entity_3, 'h', 77-1);
  entity_3[77-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  memset(entity_1, 'm', 57-1);
  entity_1[57-1]='';
  memcpy(entity_2, entity_1, 57*sizeof(char));
}
void fun()
{
  int entity_2 = 84;
  char* entity_3;
  char entity_7[90] = "";
  entity_7 = NULL;
  char entity_6[77] = "";
  entity_6 = NULL;
  memset(entity_7, 'z', 90-1);
  entity_7[90-1]='';
  memset(entity_6, 'G', 77-1);
  entity_6[77-1]='';
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  entity_2 = 20;
  memcpy(entity_3, entity_7, 90*sizeof(char));
}
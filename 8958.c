void fun()
{
  int entity_2 = 14;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  char* entity_6;
  char entity_1[57] = "";
  entity_1 = NULL;
  memset(entity_1, 'd', 57-1);
  entity_1[57-1]='';
  memset(entity_3, 'i', entity_2-1);
  entity_3[entity_2-1]='';
  entity_6 = (char*)malloc(14*sizeof(char));
  entity_6[14-1]='';
  memcpy(entity_6, entity_3, entity_2*sizeof(char));
}
void fun()
{
  int entity_3 = 11;
  char entity_6[15] = "";
  entity_6 = NULL;
  char* entity_2;
  char* entity_5;
  memset(entity_6, 'O', 15-1);
  entity_6[15-1]='';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  entity_5 = (char*)malloc(86*sizeof(char));
  entity_5[86-1]='';
  memcpy(entity_2, entity_6, 15*sizeof(char));
}
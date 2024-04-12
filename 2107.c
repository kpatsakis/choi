void fun()
{
  int entity_7 = 95;
  char* entity_2;
  char* entity_3;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(38*sizeof(char));
  entity_3[38-1]='';
  entity_2 = (char*)malloc(75*sizeof(char));
  entity_2[75-1]='';
  memset(entity_5, 'G', entity_7-1);
  entity_5[entity_7-1]='';
  memcpy(entity_2, entity_5, entity_7*sizeof(char));
}
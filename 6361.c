void fun()
{
  int entity_7 = 24;
  char entity_4[33] = "";
  entity_4 = NULL;
  char* entity_5;
  char* entity_2;
  entity_2 = (char*)malloc(35*sizeof(char));
  entity_2[35-1]='';
  memset(entity_4, 'E', 33-1);
  entity_4[33-1]='';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  entity_7 = 58;
  memcpy(entity_5, entity_4, 33*sizeof(char));
}
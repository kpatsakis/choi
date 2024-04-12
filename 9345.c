void fun()
{
  int entity_0 = 59;
  char* entity_2;
  char entity_4[33] = "";
  entity_4 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(57*sizeof(char));
  entity_3[57-1]='';
  memset(entity_4, 'Q', 33-1);
  entity_4[33-1]='';
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[entity_0-1]='';
  memcpy(entity_2, entity_4, 33*sizeof(char));
}
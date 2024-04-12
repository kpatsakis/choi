void fun()
{
  int entity_2 = 91;
  entity_2 = 39;
  char entity_4[2] = "";
  entity_4 = NULL;
  char* entity_3;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  memset(entity_4, 'z', 2-1);
  entity_4[2-1]='';
  entity_3 = (char*)malloc(44*sizeof(char));
  entity_3[44-1]='';
  memset(entity_5, 't', entity_2-1);
  entity_5[entity_2-1]='';
  memcpy(entity_3, entity_5, entity_2*sizeof(char));
}
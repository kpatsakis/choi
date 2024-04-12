void fun()
{
  int entity_3 = 44;
  int entity_2 = 70;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char* entity_1;
  memset(entity_4, 'C', entity_2-1);
  entity_4[entity_2-1]='';
  entity_1 = (char*)malloc(26*sizeof(char));
  entity_1[26-1]='';
  entity_2 = 71;
  memcpy(entity_1, entity_4, entity_2*sizeof(char));
}
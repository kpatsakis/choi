void fun()
{
  int entity_2 = 77;
  char* entity_4;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char entity_3 = 'C';
  memset(entity_6, 'B', entity_2-1);
  entity_6[entity_2-1]='';
  entity_4 = (char*)malloc(53*sizeof(char));
  entity_4[53-1]='';
  memcpy(entity_4, entity_6, entity_2*sizeof(char));
}